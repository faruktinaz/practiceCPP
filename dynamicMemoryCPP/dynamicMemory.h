#include<iostream>
using namespace std;

class Example {
public:
    int x, y;
    Example(){
        cout << "constructor worked." << endl;
    }
    ~Example(){
        cout << "destructor worked." << endl;
    }
    void print() {
        cout << "x value:" << x << " y value:" << y << endl;
    }
};