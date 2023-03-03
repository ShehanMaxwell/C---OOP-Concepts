#include <iostream>
using namespace std;


class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout << "Name is: " << Name << endl;
        cout << "Company is: " << Company << endl;
        cout << "Age is: " << Age << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    };
};

int main () {
    
    Employee employee1 = Employee("Shehan","Virtusa",25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John","HCL",28);
    employee2.IntroduceYourself();
    
};