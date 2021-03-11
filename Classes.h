#pragma once

#include <cstdint>

constexpr auto MAX_SIZE = 10;
constexpr auto LENGTH = MAX_SIZE - 1;

/////////////////////////////////////////////////////////////
// 1.1
/////////////////////////////////////////////////////////////

class Power {

private:
	double dVar1{ 1.0 };
	uint8_t nVar2{ 1 };

public:
	void SetVars(double, uint8_t);
	double Calculate() const;
};

/////////////////////////////////////////////////////////////
// 1.2
/////////////////////////////////////////////////////////////

class RGBA {

private:
	uint8_t m_red{ 0 };
	uint8_t m_green{ 0 };
	uint8_t m_blue{ 0 };
	uint8_t m_alpha{ 255 };

public:
	RGBA() {};
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};

	void Print() const;
};

/////////////////////////////////////////////////////////////
// 1.3
/////////////////////////////////////////////////////////////

class Stack {

private:
	int data[MAX_SIZE]{};
	uint8_t size{ 0 };

public:
	Stack() { for (auto i : data) i = 0; };

	void Reset();
	bool Push(const int&);
	void Pop();
	void Print() const;
};
