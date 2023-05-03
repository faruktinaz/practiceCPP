#include "Array.h"

int main()
{
    Array data(10);
    data.AddItem(5);
    data.AddItem(6);
    data.AddItem(7);
    data.AddItem(8);
    data.AddItem(10);
    data.AddItem(8);
    data.AddItem(8);
    data.AddItem(8);
    data.AddItem(8);
    data.printData();
    cout << "--------------------------------\n";
    data.removeIndexData(0);
    data.removeData(8);
    data.printData();
}