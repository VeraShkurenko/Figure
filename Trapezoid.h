#pragma once
#include "Figure.h"
class Trapezoid :public Figure
{
	int h;

	public:

	void SetDimension(const double value1);
	void SetDimension(const double value1, const double value2);
	void SetDimension(const double value1, const double value2, int height);

	void ShowArea() const;

};
