#include "Classes.h"
#include <string>
#include <stdio.h>
#include <iostream>

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


void RGBA::Print() {

	char buffer[64];
	const char* fmt{ "Your color: RGBA(%d, %d, %d, %d)\n" };
	sprintf_s(buffer, fmt, m_red, m_green, m_blue, m_alpha);

	std::cout << buffer << std::endl;
}
