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
using namespace std;

ipfcomp::ipfcomp(){type = "IPF";};

string ipfcomp::comptype(){
	//4. Abstract classes with an abstract method that is implemented in a child class.
	cout << type << " " << getequipment() << endl;
	return type + " " + getequipment();
}

//3. Overloading using either methods
void ipfcomp::display(){
	cout << "This Lifters details are " << endl;

}

