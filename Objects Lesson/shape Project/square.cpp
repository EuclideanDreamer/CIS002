#include "square.h"
square::square() { b = 0; }

square::square(double x)
{
	b = x;
}

double square::area() {
	return b * b;
}

double square::parimeter() {
	return 4 * b;
}