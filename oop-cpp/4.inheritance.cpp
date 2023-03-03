#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};


class Employee : AbstractEmployee {
private:
    
    string Company;
    int Age;
protected:
    string Name;
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

class Developer : public Employee {
public:
     string FavProgrammingLanguage;
     Developer(string name, string company, int age, string favProgrammingLanguage) 
      : Employee(name, company, age)  
     {
        FavProgrammingLanguage = favProgrammingLanguage;
     };
    void FixBug(){
        cout << Name << " fixed bug using "<< FavProgrammingLanguage << endl;
    };
};

class Teacher : public Employee {
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;

    };
    Teacher (string name, string company, int age, string subject ) 
        :Employee(name, company, age)
    {
        Subject = subject;
    };
};


int main () {
    
    
    Developer d = Developer("Maxwell","Virtusa",25,"C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher ("Sam","Virtusa",50,"Networking");
    t.PrepareLesson();
    t.AskForPromotion();
};  