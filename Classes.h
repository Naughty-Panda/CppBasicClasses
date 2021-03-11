#pragma once

#include <cstdint>

class Power {

private:
	double dVar1{ 1.0 };
	uint8_t nVar2{ 1 };

public:
	void SetVars(double, uint8_t);
	double Calculate() const;
};

class RGBA {

private:
	uint8_t m_red{ 0 };
	uint8_t m_green{ 0 };
	uint8_t m_blue{ 0 };
	uint8_t m_alpha{ 255 };

public:
	RGBA() {};
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};
	void Print();
};

class Stack {

private:
	int arr[10];
	int size{ 0 };

public:
	void Reset() {};
	bool push() {};
};
