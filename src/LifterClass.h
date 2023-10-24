//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : LifterClass.h - servers to define the lifter class
//============================================================================


// Defines

#ifndef LIFTERCLASS_H_
#define LIFTERCLASS_H_

#include <iostream>
#include <cstring>
#include "ipfcomp.h"
using std::string;

// Creation of following
//1. Inheritance through the use of multiple classes.
//2. Correct and appropriate use of the access specifiers public, private, and protected.
//4. Abstract classes with an abstract method that is implemented in a child class.
//6. Separate compilation with all classes in your assignment (i.e., all classes should have .cpp and .h files).
class Lifter: public ipfcomp{ // Use the IPF sample to show abstract then remove it for the rest
protected:
	string name;
	//string type
	int total;
	int bodyweight;
	int strengthscore;

public:
	Lifter();
	Lifter(std::string& name, int bodyweight, int total);
	virtual int SortintoWeightclass (int *weightclasses);
	virtual int CalculateStrengthScoreAndTotal(int weightcategory, int &coeff);
	virtual void display(string weightcategory); //3. Overloading using either methods
	virtual string getequipment();
	//virtual ~Lifter();
	//virtual void typeoflifter() = 0;
	//
};



#endif /* LIFTERCLASS_H_ */
