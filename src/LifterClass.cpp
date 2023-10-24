//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : LifterClass.cpp - servers to define the functions of the female lifter class
//============================================================================


// Declare Libraries required
#include <iostream>
#include <cstring>
#include "ipfcomp.h"
#include "LifterClass.h"
using namespace std;

Lifter::Lifter(){
	strengthscore = 0;
};

Lifter::Lifter(std::string& name, int bodyweight, int total):name(name),bodyweight(bodyweight), total(total){
	strengthscore = 0;
	type = ipfcomp::comptype();
	cout << "lifter name " << name << " Lifter type  " << type << endl;
};

int Lifter::SortintoWeightclass(int *weightclasses){ //int bodyweight, int &competingweightclass){
	int weightcategory=0;
	for(int i=0; i<9; i++){
		if(bodyweight <= weightclasses[i]){weightcategory = weightclasses[i]; break;}
		else if((i == 8) && (bodyweight > weightclasses[i])){weightcategory = weightclasses[i];}
	}
	return weightcategory;
}

int Lifter::CalculateStrengthScoreAndTotal(int weightcategory, int &coeff){
	//cout << "co-efficient passed " << coeff << endl;
	coeff++;
	//cout << "co-efficient now " << coeff << endl;

	//13 Use of all four C++ explicit style casts part 2
	//const int newweightcategory = weightcategory; int *weightcategoryptr = const_cast<int*>(&newweightcategory);
	//string newcoeff = static_cast<string>(coeff)/3;
	//float *updatedcoeff = reinterpret_cast<float*> (newcoeff);
	//if(total > 0) {strengthscore = total/(weightcategoryptr)*(updatedcoeff);} // Competitor successfully makes at least 1 lift
	if(total > 0) {strengthscore = total/(weightcategory)*(coeff);} // Competitor successfully makes at least 1 lift
	else {strengthscore = 0;} //Competitor bombs out making no lifts or no show no score calculated
	return strengthscore;
}

string Lifter::getequipment(){
	//4. Abstract classes with an abstract method that is implemented in a child class.
	return " Raw";
}

//3. Overloading using either methods
void Lifter::display(string weightcategory){
	ipfcomp::display();
	cout << "Lifter name      : " << name << endl;
	cout << "Body weight      : " << bodyweight << endl;
	cout << "Competing in     : " << ipfcomp::comptype() << endl;
	cout << "Lifting in       : " << weightcategory << endl;
	cout << "Lifters Total    : " << total << endl;
	cout << "Strength Score is: " << strengthscore << endl;
}


