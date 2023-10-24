//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : FemaleLifterClass.h - servers to define the female lifter class
//============================================================================


#ifndef FEMALELIFTERCLASS_H_
#define FEMALELIFTERCLASS_H_

#include "LifterClass.h"
#include <iostream>
#include <cstring>

using std::string;


//Implementation  for following
//1. Inheritance through the use of multiple classes.
//3. Overloading using either methods or constructor methods.
//4. Abstract classes with an abstract method that is implemented in a child class.
//6. Separate compilation with all classes in your assignment (i.e., all classes should have .cpp and .h files).

class FemaleLifter: public Lifter{
private:
	string femaleteam;
protected:
	int femaleweightcategory;
	static int femalecoefficient;

public:
	FemaleLifter(string name, int bodyweight, int total);
	virtual ~FemaleLifter();
	virtual int SortintoWeightclass ();
	virtual int CalculateStrengthScoreAndTotal();
	virtual void display(string weightcatstring);

	/*
    // Overload + operator to add two female lifter objects and create a team
	FemaleLifter operator+(const FemaleLifter& team) {
		FemaleLifter femaleteam(liftersname, officalweight, total);
    	femaleteam.bodyweight = this->bodyweight + team.bodyweight;
    	femaleteam.total = this->total + team.total;
    	femaleteam.strengthscore = this->strengthscore + team.strengthscore;
       return femaleteam;
    }

	// Overload - operator to subtract two female lifter objects to find the difference between lifters
    FemaleLifter operator-(const FemaleLifter& liftertocheck) {
    	FemaleLifter differencelifters(liftersname, officalweight, total);
    	differencelifters.bodyweight = this->bodyweight - liftertocheck.bodyweight;
    	differencelifters.total = this->total - liftertocheck.total;
    	differencelifters.strengthscore = this->strengthscore - liftertocheck.strengthscore;
       return differencelifters;
    }


    // Overload - operator to subtract two female lifter objects to duplicate lifters
    FemaleLifter operator=(const FemaleLifter& liftertocopy) {
    	FemaleLifter duplicatelifter(liftersname, officalweight, total);
    	duplicatelifter.bodyweight = this->bodyweight == liftertocopy.bodyweight;
    	duplicatelifter.total = this->total == liftertocopy.total;
    	duplicatelifter.strengthscore = this->strengthscore == liftertocopy.strengthscore;
       return duplicatelifter;
    }
    */

};



#endif /* FEMALELIFTERCLASS_H_ */
