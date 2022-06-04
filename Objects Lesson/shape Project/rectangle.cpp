#include "rectangle.h"
rectangle::rectangle()
{
	b = 0; h = 0;
}
rectangle::rectangle(double x)
{
	b = x; h = x;
}

rectangle::rectangle(double x, double y)
{
	b = x; h = y;
}

double rectangle::perimeter()
{
	return ((2*b) + (2*h));
}

double rectangle::area()
{
	return b* h;
}