#include <iostream>

#include "Classes.h"

int main() {

	Power pow;
	pow.SetVars(3.0, 4);
	std::cout << pow.Calculate() << std::endl;

	pow.SetVars(3.3, 4);
	std::cout << pow.Calculate() << std::endl;

	RGBA color;
	color.Print();

	color = RGBA(128, 128, 128, 0);
	color.Print();

	return 0;
}