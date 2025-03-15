#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
    private:
    int rollNumber;
    public:
    Student(string n, int a, int r) : Person(n, a) {
        rollNumber = r;
    }
    void displayStudentInfo() {
        displayPersonInfo(); 
        cout << "Roll Number: " << rollNumber << endl;
    }
};
int main() {
    string name;
    int age, rollNumber;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    Student student(name, age, rollNumber);
    student.displayStudentInfo();
    return 0;
}