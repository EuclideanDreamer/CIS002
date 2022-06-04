#include <iostream>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
int main() {
	rectangle blahblahblah(4);

	rectangle blah4(4, 3);
	std::cout << blahblahblah.area() << std::endl;
	std::cout << blah4.area() << std::endl;

}