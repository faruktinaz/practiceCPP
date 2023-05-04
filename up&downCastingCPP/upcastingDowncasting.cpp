#include"Shape.h"

int main()
{
    Circle daire1(4.5);
    daire1.calculateArea();
    daire1.calculatePerimeter();
    daire1.display();
    Rectangle rectangle1(15,2);
    rectangle1.calculateArea();
    rectangle1.calculatePerimeter();
    rectangle1.display();

}