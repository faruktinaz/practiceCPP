#include"dynamicMemory.h"

int main()
{
    Example exObj, *exPtr;
    exObj.x = 3;
    exObj.y = 6;
    exObj.print();

    exPtr = &exObj;
    exPtr->x = 1;
    exPtr->y = 12;
    exPtr->print();

    exObj.print();

    Example* ptrExample = new Example;

    ptrExample->x = 5;
    ptrExample->y = 3;
    ptrExample->print();
    exObj.print();

    delete ptrExample;

    int **ptr2DArray = new int* [5];

    for (int i = 0; i < 5; i++){
        ptr2DArray[i] = new int[5];
    }


    return (0);
}