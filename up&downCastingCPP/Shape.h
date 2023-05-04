#include<iostream>
using namespace std;
#define pi 3.141592

class Shape {
private:
    double shapeArea;
    double shapeCircumference;
public:
    double getArea() const {return shapeArea;};
    double getCircumF() const {return shapeCircumference;};
    void setArea(double shape_area){
        shapeArea = shape_area;
    }
    void setCircumF(double c_fr) {
        shapeCircumference = c_fr;
    }
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
    virtual void display() = 0;
};

class Circle :public Shape {
private:
    double radius;
public:
    Circle(double r){
        radius = r;
        cout << "circle created." << endl;
    }
    void calculateArea(){
        setArea(radius * radius * pi);
    }
    void calculatePerimeter(){
        setCircumF(2 * pi * radius);
    }
    void display(){
        cout << "Circle area: " << getArea() << endl;
        cout << "Circle circum: " << getCircumF() << endl;   
    }
};

class Rectangle :public Shape{
private:
    double width, height;
public:
    Rectangle(double w, double h){
        width = w;
        height = h;
        cout << "Rectangle created." << endl;
    }
    void calculateArea(){
        setArea(width * height);
    }
    void calculatePerimeter(){
        setCircumF((2 * width) + (2 * height));
    }
    void display(){
        cout << "Rectangle area: " << getArea() << endl;
        cout << "Rectangle circum: " << getCircumF() << endl;
    }
};