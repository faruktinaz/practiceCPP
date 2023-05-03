#include<iostream>
using namespace std;

class Array {
    int *data, size, capacity;
    int findIndex(int number, int b = 0);
public:
    Array(int user_capacity = 5);
    ~Array();
    int getSize() const {
        return capacity;
    }
    void AddItem(int number);
    void printData();
    void removeIndexData(int index);
    void removeData(int number);
};

Array::Array(int user_capacity)
{
    capacity = user_capacity;
    size = 0;
    data = new int[capacity];
    cout << "array is created with capacity " << capacity << endl;
}

Array::~Array(){
    delete[] data;
    cout << "Array destroyed." << endl;
}

void Array::removeIndexData(int index)
{
    if (index < 0 || index >= size){
        cout << "Error" << endl;
        return;
    }

    for (int i = index; data[i]; i++) {
        data[i] = data[i + 1];
    }
    size -= 1;
}

void Array::printData()
{
    for (int i = 0; data[i]; i++) {
        cout << data[i] << endl;
    }
}

void Array::removeData(int number)
{
    int counter = 0;
    for (int i = 0; i <= size; i++){
        if (data[i] == number){
            for (int j = i; j < size; j++){
                data[j] = data[j + 1];
            }
            counter += 1;
            i -= 1;
        }
    }
    cout << counter << " items ("<< number <<") " << "are deleted from the array" << endl;
    size -= counter;
}

void Array::AddItem(int number)
{
    data[size] = number;
    size++;
    cout << "item added." << endl;
}