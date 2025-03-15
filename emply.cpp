#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    string type;

public:
   
    Employee() {
        name = "Unknown";
        type = "Unknown";
    }

   
    Employee(string n, string t) {
        name = n;
        type = t;
    }

   
    void display() {
        cout << "Employee Name: " << name << ", Type: " << type << endl;
    }
};


class Manager : public Employee {
private:
    string responsibilities;

public:
    
    Manager(string n, string t, string res) : Employee(n, t) {
        responsibilities = res;
    }

   
    void display() {
        cout << "Employee Name: " << name << ", Type: " << type << ", Responsibilities: " << responsibilities << endl;
    }
};

int main() {
   
    Employee emp1("Alice", "Full-Time");

    
    Employee emp2("Bob", "Part-Time");

   
    emp1.display();
    emp2.display();

    
    Manager manager1("Charlie", "Full-Time", "Manage team, oversee projects");

   
    manager1.display();

    return 0;
}