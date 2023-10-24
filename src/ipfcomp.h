//============================================================================
// Title       : EE402_A1_ALee
// Author      : Aisling Lee
// Email	   : aisling.lee32@mail.dcu.ie
// Student No  : 20216371
// Programme   : GCIOT
// Version     : V1.0
// Description : EE402 Assignment 1 - Power lifting competition model data structure
// Script	   : ipfcomp.h - servers to define the IPF competition class
//============================================================================

#ifndef IPFCOMP_H_
#define IPFCOMP_H_

#include <iostream>
#include <cstring>
using std::string;

// Creation of following
//1. Inheritance through the use of multiple classes.
//2. Correct and appropriate use of the access specifiers public, private, and protected.
//4. Abstract classes with an abstract method that is implemented in a child class.
//6. Separate compilation with all classes in your assignment (i.e., all classes should have .cpp and .h files).
class ipfcomp{
protected:
	string type;

public:
	ipfcomp();
	virtual string getequipment() = 0;
	virtual string comptype();
	virtual void display();
};



#endif /* IPFCOMP_H_ */
