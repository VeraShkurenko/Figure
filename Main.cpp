#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include "Rhombus.h"


int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Square square;
    Trapezoid trapezoid;
    Rhombus rhombus;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    square.SetDimension(2, 2);
    square.ShowArea();

    trapezoid.SetDimension(10.0, 15.0, 5);
    trapezoid.ShowArea();
    rhombus.SetDimension(2, 4);
    rhombus.ShowArea();



    return 0;
}