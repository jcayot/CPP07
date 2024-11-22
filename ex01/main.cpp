//
// Created by jcayot on 8/29/24.
//

#include <iostream>
#include <ostream>

#include "iter.hpp"

void printInt(const int& x) {
	std::cout << x << " ";
}

void printDouble(const double& x) {
	std::cout << x << " ";
}

int main() {
	int intArr[] = {1, 2, 3, 4, 5};
	::iter(intArr, 5, printInt);
	std::cout << std::endl;

	const double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	::iter(doubleArr, 5, printDouble);
	std::cout << std::endl;

	return 0;
}