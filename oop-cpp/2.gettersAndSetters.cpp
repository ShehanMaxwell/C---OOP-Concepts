#include <iostream>
using namespace std;


class Employee {
private:
    string Name;
    string Company;
    int Age;


public:
        void setName(string name) { //setter
            Name = name;
        }

        string getName() {         //getter
            return Name;
        }

        void setCompany(string company) {  //setter
            Company = company;
        }

        string getCompany() {             //getter
            return Company;
        }

        void setAge(int age) {    //setter
            Age = age;
        }

        int getAge() {                //getter
            return Age;
        }


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

    employee1.setAge(39);

    cout << employee1.getName() << " is "<<employee1.getAge()<< " years old"<< endl;


    
    
};