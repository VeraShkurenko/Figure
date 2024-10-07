#include <iostream>
using namespace std;
#include "Trapezoid.h"
#include "Figure.h"


void Trapezoid::SetDimension(const double value1, const double value2) {
    Figure::SetDimension(value1, value2);
    h = 0;
}

void Trapezoid::SetDimension(const double value1, const double value2, int height) {
    Figure::SetDimension(value1, value2);
    h = height;
}

void Trapezoid::ShowArea() const
{

    cout << "Area of trapezoid: " << (m_value1 + m_value2) * h / 2 << endl;

}
