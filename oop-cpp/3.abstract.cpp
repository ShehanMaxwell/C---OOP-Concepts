#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};


class Employee : AbstractEmployee {
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
            if(age>=18)
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
    void AskForPromotion(){
            if(Age>30){
                cout << Name << " got promoted!" << endl;
            } else {
                cout << Name << " NO PROMOTION!" << endl;
            };
        };
};

int main () {
    
    Employee employee1 = Employee("Shehan","Virtusa",25);
    Employee employee2 = Employee("John","HCL",67);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    
    
}; 