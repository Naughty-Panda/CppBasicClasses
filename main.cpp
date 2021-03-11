#include <iostream>

#include "Classes.h"

int main() {

	/////////////////////////////////////////////////////////////
	// 1.1
	/////////////////////////////////////////////////////////////

	Power pow;
	pow.SetVars(3.0, 4);
	std::cout << "3.0 ^ 4 = " << pow.Calculate() << std::endl;

	pow.SetVars(3.3, 4);
	std::cout << "3.3 ^ 4 = " << pow.Calculate() << std::endl;

	std::cout << std::endl;

	/////////////////////////////////////////////////////////////
	// 1.2
	/////////////////////////////////////////////////////////////

	RGBA color;
	color.Print();

	color = RGBA(128, 128, 128, 0);
	color.Print();

	std::cout << std::endl;

	/////////////////////////////////////////////////////////////
	// 1.3
	/////////////////////////////////////////////////////////////

	Stack stack;
	stack.Reset();
	stack.Print();

	stack.Push(3);
	stack.Push(7);
	stack.Push(5);
	stack.Print();

	stack.Pop();
	stack.Print();

	stack.Pop();
	stack.Pop();
	stack.Print();

	return 0;
}
