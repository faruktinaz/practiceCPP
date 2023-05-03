#include"Person.h"
#include <time.h>

int main()
{
    srand(time(NULL));
    Student studentArray[] = {{"faruk","tinaz",1000},{"emin", "kumru",3230},{"sevde","taskin",2132}};
    Teacher teacher1("faruk", "tinaz", "software");

    for (int i = 0; i < 3; i++){
        studentArray[i].setStudentGrade(rand() % 100 + 1);
        studentArray[i].print();
    }

    teacher1.passFailStatus(studentArray);
    teacher1.printStudentInformation(studentArray);
    return (0);
}