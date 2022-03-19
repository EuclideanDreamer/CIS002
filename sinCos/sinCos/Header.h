#pragma once

class MyClass
{
	MyClass();
};




/*
author: bailey

def: our problem is to take a decimal or integer number from the user, and give the sine and cosine,
	to do this we will have to take a string from the user, make sure it is the string we want, make 	
	sure the number is in the range we want, then make a radian number, get our sine and cosine, 	
	print results.

Procedures:
	(simplified)
		*take a decimal or integer number from the user,
		* give the sine and cosine,
		
		
	(procedural)
	*take a string from the user,
	*make sure it is the string we want
	*make sure the number is in the range we want
	*then make a radian number
	*get our sine and cosine
	*print results.

*/


#include <iostream>
#include <string>

// get a string from the user 

std::string getString();


// make sure it is the string we want
double checkString(std::string);

//return radian number of degree
double getRadian(double);

//make the sine and cosine
double sine(double);

double cosine(double);

double tangent(double);




//------------------------------------------------------------------------------------
//		irl this stuff woud be in another file.cpp

std::string getString() {
	std::string str;
	std::cout << "Hey man, give us a number between 1-90: ";
	std::cin >> str;

	return str;// we are returning a string, because this function is a string type
}

// make sure it is the string we want
double checkString(std::string str) {
	//make the string a function 
	double angle;
	if (angle = std::stod(str)) {//this is complex 
		//do this stuff
		//make sure the number is in the range we want
		if ((angle < 0.0001) || (angle > 89.9999)) {
			std::cout << "Number too large or small!" << std::endl;
			return 0.0;
		}
		else {
			return angle;
		}
	}
	else {
		std::cout << "Conversion fail, doubles and integers only!" << std::endl;
		return 0.0;
	}
	return angle;
}



//return radian number of degree
double getRadian(double angle) {

	// radian = pi/180 * angleMeasure

	const double pi = 3.14159;
	double radians = (pi / 180) * angle;
	return radians;

}

//make the sine and cosine
//both take a radian angle as an argument
double sine(double rad) {

	return sin(rad);

}

double cosine(double rad) {
	return cos(rad);

}
