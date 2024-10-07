#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    square.SetDimension(2, 2);
    square.ShowArea();


    return 0;
}