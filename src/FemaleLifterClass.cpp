//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : FemaleLifterClass.cpp - servers to define the functions of the female lifter class
//============================================================================


// Declare Libraries required
#include <iostream>
#include <cstring>
#include "LifterClass.h"
#include "FemaleLifterClass.h"
using namespace std;


//Implementation  for following

//6. Separate compilation with all classes in your assignment (i.e., all classes should have .cpp and .h files).
FemaleLifter::FemaleLifter(string name, int bodyweight, int total): Lifter(name, bodyweight, total){
	femaleweightcategory = 0;
	strengthscore = 0;
	femalecoefficient = 5;
	//type = "IPF Raw";
	//cout << "lifter name " << name << " Lifter type  " << type << endl;
};

FemaleLifter::~FemaleLifter(){
	cout << "lifter name " << name << " has been destroyed "<< endl;
};


int FemaleLifter::SortintoWeightclass (){
	int femaleweightclasses[]= {47, 52, 57, 63, 69, 76, 72, 84, 85};
	femaleweightcategory = Lifter::SortintoWeightclass(femaleweightclasses);
	return femaleweightcategory;
}

// Point 7.
// Passing an object to a function by value and by reference. Demonstrate the impact of the change
int FemaleLifter::CalculateStrengthScoreAndTotal(){
	cout << "femalecoefficient " << femalecoefficient << endl;
	strengthscore = Lifter::CalculateStrengthScoreAndTotal(femaleweightcategory, femalecoefficient);
	cout << "femalecoefficient " << femalecoefficient << endl;
	return strengthscore;
}

//3. Overloading using either methods or constructor methods.
void FemaleLifter::display(string weightcatstring){
	//FemaleLifter.typeoflifter();
	if (femaleweightcategory == 85){weightcatstring = "84+";}	else{weightcatstring = std::to_string(femaleweightcategory);}
	Lifter::display(weightcatstring);
}


