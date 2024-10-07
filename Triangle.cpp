#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowArea() const
{
    cout << "Area of triangle: " << (m_value1 * m_value2) / 2 << endl;
}