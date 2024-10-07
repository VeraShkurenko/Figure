#pragma once
#include "Figure.h"
class Trapezoid :public Figure
{
	int h;
	public:

	void SetDimension(const double value1, int h);
	void ShowArea() const;

};
