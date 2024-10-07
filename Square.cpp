#include <iostream>
using namespace std;
#include "Square.h"



void Square::ShowArea() const
{
    cout << "Area of circle: " << (m_value1 * m_value1) * (m_value2 * m_value2) << endl;
}
