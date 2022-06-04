#pragma once
#include "square.h"
class rectangle 
{
public:
    rectangle();
    rectangle(double);
    rectangle(double, double);
    //data members
    double h, b; // 
    //overload the member functions
    double area();
    double perimeter();
};

