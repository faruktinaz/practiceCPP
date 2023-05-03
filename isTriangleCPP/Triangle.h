#include <iostream>
#include <string>
using namespace std;

class Triangle{
public:
    Triangle(float a, float b, float c);       // Constructor
    ~Triangle();                              // Destructor
    Triangle(const Triangle& oth);           // Copy Constructor
    bool isTriangle(float a, float b, float c);
    float getSideA() const {
        return sideA;
    }
    float getSideB() const {
        return sideB;
    }
    float getSideC() const {
        return sideC;
    }
    float calculateArea();
private:
    float sideA,sideB,sideC;
};

Triangle::Triangle(float a, float b, float c)
{
    while (!(isTriangle(a, b, c)))
    {
        cout << "girdiginiz kenarlardan bir ucgen olusmuyor tekrar deneyiniz." << endl;
        cin >> a >> b >> c;
    }
    sideA = a;
    sideB = b;
    sideC = c;
    cout << "Triangle created." << endl;
}

bool Triangle::isTriangle(float a, float b, float c)
{
    // sideA:       |b-c| < a < b+c
    // sideB:       |a-c| < b < a+c
    // sideC:       |a-b| < c < a+b
    if (!((abs(b - c) < a && (a < b + c))))
    {
        cout << "Invalid A" << endl;
        return false;
    }
    if (!((abs(a - c) < b && (b < a + c))))
    {
        cout << "Invalid B" << endl;
        return false;
    }
    if (!((abs(a - b) < c && (c < a + b))))
    {
        cout << "Invalid A" << endl;
        return false;
    }
    return true;
}

Triangle::~Triangle()
{
    cout << "Triangle destroyed." << endl;
}