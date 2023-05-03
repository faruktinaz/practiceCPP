#include<iostream>

class baseClass {
protected:
    int x;
public:
    void setX(int mainX) {
        x = mainX;
    }
    int getX() const {
        return (x);
    }
    void print() {
        std::cout << "X:" << x << std::endl;
    }
};

class derivedClass:public baseClass {
public:
    int y;
    void setY(int mainY) {
        y = mainY;
    }
    int getY() const {
        return y;
    }
    void print2() {
        std::cout << "Y:" << y << std::endl;
    }
};