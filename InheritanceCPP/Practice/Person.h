#include<iostream>
using namespace std;

class Person{
protected:
    string personName, personSurname;
public:
    Person(string name = "", string surname = ""){
        personName = name;
        personSurname = surname;
        cout << "person constructor worked." << endl;
    }
    string getPersonName()const { return (personName);};
    string getPersonSurname()const { return (personSurname);};
    void setPersonName(string name) {personName = name;};
    void setPersonSurname(string surname) {personSurname = surname;};
    void print() {cout << "name: " << personName << "\n" << "surname: " << personSurname << "\n";};

};

class Student : public Person{
private:
    int studentID, studentGrade;
    bool passOrFail;
public:
    Student(string name, string surname, int ID):Person(name,surname){
        studentID = ID;
        cout << "student constructor worked." << endl;
    }
    int getStudentID()const {return (studentID);};
    void setStudentID(int ID) {studentID = ID;};
    int getStudentGrade()const {return studentGrade;};
    void setStudentGrade(int grade) {studentGrade = grade;};
    int getPassOrFail()const {return passOrFail;};
    void setPassOrFail(bool passFail) {passOrFail = passFail;};
    void print(){
        Person::print();
        cout << "student ID: " << studentID << "\n";
        cout << "student grade: " << studentGrade << "\n";
        if (passOrFail){cout << "success" << endl;}
        else {cout << "fail" << endl;}
    }
};

class Teacher :public Person{
private:
    string department;
public:
    Teacher(string name, string surname, string dep):Person(name, surname){
        department = dep;
        cout << "teacher contructor worked." << endl;
    }
    string getDepartment()const {return department;};
    void setDepartment(string dep) {department = dep;};
    void print(){
        Person::print();
        cout << "department:" << department << endl;
    }
    void passFailStatus(Student* studentArray);
    void printStudentInformation(Student* studentArray);
};

void Teacher::passFailStatus(Student* studentArray){
    float average = 0.0;
    for (int i = 0; i < 3; i++){
        average += studentArray[i].getStudentGrade();
    }
    average = (float) average / 3;
    cout << "class average:" << average << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < 3; i++){
        if (studentArray[i].getStudentGrade() >= average){
            studentArray[i].setPassOrFail(true);
        }
        else {studentArray[i].setPassOrFail(false);}
    }
}

void Teacher::printStudentInformation(Student* studentArray){
    for (int i = 0; i < 3; i++){
        studentArray[i].print();
        if (studentArray[i].getPassOrFail() == true) {
            cout << "status: success" << endl;
        }
        else{
            cout << "status: fail" << endl;
        }
    }
}