//
// Created by jcayot on 8/29/24.
//

#include <iostream>
#include <ostream>

#include "iter.hpp"

void printInt(int x) {
	std::cout << x << " ";
}

void printDouble(double x) {
	std::cout << x << " ";
}

int main() {
	int intArr[] = {1, 2, 3, 4, 5};
	size_t intLen = std::size(intArr);
	::iter<int, void>(intArr, intLen, printInt);
	std::cout << std::endl;

	const double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleLen = std::size(doubleArr);
	::iter<double, void>(doubleArr, doubleLen, printDouble);
	std::cout << std::endl;

	return 0;
}
