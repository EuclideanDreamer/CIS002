#pragma once
#include "shape.h"
class square :public shape
{
public:
	//default constructor
	square();
	//parameter construct and functional members
	square(double);
	double area();
	double parimeter();
	//data members
	double b; //base of square 

};

