#include <iostream>

void printFunct(int*, int);

int* givePointer(int*);

int* alterArray(int*, int);

int* createConstantArr(int count);

int *append(int currentCount, int NewCount, int* arrP);

int main() {
	int* arrP;

	int a[] = { 1,2,3, 4, 5 };


	int count;

	std::cout << "Please enter a number to be used as a count: ";
	std::cin >> count;

	arrP = new int{ count }; //allocate the array

	for (int i = 0; i < 5; i++) {
		arrP[i] = i;
		//iterate over the array and do stuff
	}



	append(count, 6, arrP);

	delete[] arrP; //deallocate the array


	return 0;
}

int* givePointer(int* arrP){
	return arrP;
}


void printFunct(int* arrP, int count) {
	for (int i = 0; i < count; i++) {
		std::cout << arrP[i] << std::endl;
	}
}

int* alterArray(int* arrP, int count) {
	std::cout << "Please enter numbers for an integer array" << std::endl;

	for (int i = 0; i < count; i++) {
		std::cout << ">>: ";
		std::cin >> arrP[i];

	}
	return arrP;
}


int* createConstantArr(int count) {
	int array[500];
	std::cout << "Please enter numbers for an integer array" << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << ">>: ";
		std::cin >> array[i];
	}
	return array;
}

int *append(int currentCount, int newCount, int* arrP) {
	//create a new array to store all items
	int *newArrP;
	newArrP = new int[currentCount + newCount];
	//first copy old items
	for (int i = 0; i < currentCount - 1; i++) {
		newArrP[i] = arrP[i];
	}
	//now insert new items
	for (int i = currentCount - 1; i < newCount - 1; i++) {
		std::cout << "Enter Array Item : ";
		std::cin >> newArrP[i];
	}
	//now call delete on the old array
	delete[] arrP;
	//now return the new array
	return newArrP;
}
