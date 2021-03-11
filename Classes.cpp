#include <iostream>
#include <stdio.h>
#include <string>

#include "Classes.h"

/////////////////////////////////////////////////////////////
// 1.1
/////////////////////////////////////////////////////////////

void Power::SetVars(double var1, uint8_t var2) {

	dVar1 = var1;
	nVar2 = var2;
}

double Power::Calculate() const {

	double result = dVar1;
	for (uint8_t i = 1; i < nVar2; i++) {
		result *= dVar1;
	}

	return result;
}

/////////////////////////////////////////////////////////////
// 1.2
/////////////////////////////////////////////////////////////

void RGBA::Print() const {

	char buffer[64];
	const char* fmt{ "Your color: RGBA(%d, %d, %d, %d)" };
	sprintf_s(buffer, fmt, m_red, m_green, m_blue, m_alpha);

	std::cout << buffer << std::endl;
}

/////////////////////////////////////////////////////////////
// 1.3
/////////////////////////////////////////////////////////////

void Stack::Reset() {

	for (uint8_t i = 0; i < size; i++) {
		data[i] = 0;
	}

	size = 0;
}

bool Stack::Push(const int& val) {

	if (size > LENGTH) return false;

	data[size++] = val;
	return true;
}

void Stack::Pop() {

	if (!size) return;

	data[size-1] = 0;
	size--;
}

void Stack::Print() const {

	std::cout << "Stack size = " << static_cast<int>(size) << ": [ ";

	for (uint8_t i = 0; i < size; i++) {
		std::cout << data[i] << " ";
	}

	std::cout << "]\n";
}
