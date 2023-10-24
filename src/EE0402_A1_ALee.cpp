//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : EE402_A1_ALee.cpp - Main function for implementation
//============================================================================

// Declare Libraries required
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <cstring>
#include "LifterClass.h"
#include "FemaleLifterClass.h"
using namespace std;


//16. Demonstrates the difference between a C++ class and a C++ struct.
struct Lifts {
  int lift1;
  int lift2;
  int lift3;
} squat, bench, deadlift;


int FindBestLift(int lift1, int lift2, int lift3){
	int bestlift=0;
	int lifts[]={lift1, lift2, lift3};
	for(int i=0; i<3; i++){
			if(bestlift <= lifts[i]){bestlift = lifts[i];}
			if(bestlift > lifts[i]){break;}
	}

	return bestlift;
}

// Point 7:	Passing an object to a function by value and by reference.
void calctotal(int squat, int bench, int deadlift, int &total){
	total = squat + bench + deadlift;
}


int main(){

	// Create a lifter here
	// User inputs Lifter data
	string liftersname = "Jane Doe";
	//string liftertype = "IPF Raw";

	//16. Demonstrates the difference between a C++ class and a C++ struct
	//publicly usable states
	squat.lift1 =110;
	squat.lift2 =130;
	squat.lift3 =140;
	int officalweight = 89;
	int bestsquat = FindBestLift(squat.lift1, squat.lift2, squat.lift3);
	int bestbench = FindBestLift(60, 65, 70);
	int bestdeadlift = FindBestLift(110, 130, 140);
	int total = 0;
	calctotal(bestsquat, bestbench, bestdeadlift, total ); //cout << "Lifter Total is "<< total << endl;

	// Creating a an object FemaleLifter with declaration
	FemaleLifter FemaleLifter1(liftersname, officalweight, total);
	FemaleLifter1.SortintoWeightclass();
	FemaleLifter1.CalculateStrengthScoreAndTotal();
	FemaleLifter1.display("");
	cout << " " << endl;
	cout << " " << endl;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

	// User inputs Lifter data
	liftersname = "Dolly Jean";
	//liftertype = "IPF Raw";
	officalweight = 47;
	bestsquat = 110;
	bestbench = 40;
	bestdeadlift = 120;
	total = bestsquat + bestbench + bestdeadlift;

	// Creating a an object FemaleLifter with pointers
	//5. Correct use of new and delete for the allocation of an object/objects, with operations on the object using pointers.
	FemaleLifter *FemaleLifter2 = new FemaleLifter(liftersname, officalweight, total); // create pointer to new object
	FemaleLifter2->SortintoWeightclass();											   // method for calling methods for pointer objects
	FemaleLifter2->CalculateStrengthScoreAndTotal();
	FemaleLifter2->display("");
	delete FemaleLifter2;

	//13 Use of all four C++ explicit style casts part 1
	Lifter *FemaleLifter3 = new FemaleLifter(liftersname, officalweight, total); //Upcasting
	FemaleLifter *FemaleLifter4 = dynamic_cast<FemaleLifter*> (FemaleLifter3);//downcasting to correct type// Must call destructor w/ ptrs as so

	//14. Use of dynamic binding with virtual & non-virtual methods. Demonstrate the impact.
	Lifter dynamiclifter;
	FemaleLifter femaledynamiclifter;

	Lifter *dynamiclifterPtr = &dynamiclifter;
	dynamiclifterPtr->display(""); // uses display method of Lifter

	dynamiclifterPtr = &femaledynamiclifter;
	dynamiclifterPtr->display(""); // uses display method of FemaleLifter

	return 0;
}


/*
class MaleLifter{
private:
	int bodyweight;
	int weightcategory;
public:
	virtual int SortintoWeightclass(int bodyweight, int &competingweightclass);
	virtual int CalculateStrengthScoreAndTotal(int lifts[], int weightclass, int &total, int sizeofarray);
};


int MaleLifter::SortintoWeightclass(){
	int weightclasses = {59, 66, 74, 83, 93, 105, 120, 120.1};
	competingweightclass = sortweight(weightclasses);
	return competingweightclass;
}
*/
