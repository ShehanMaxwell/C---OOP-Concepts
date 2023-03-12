// #include <iostream>
// using namespace std;

// class Employee {
// protected:
//     int number;
//     float basic_salary;
// public:
//     Employee (int num, float salary){
//         number = num;
//         basic_salary = salary;
//     }
// };

// class Manager : public Employee {
// private:
//     float fuel_allowance;
//     float incentive;
// public:
//     Manager (float fuel, float incen) : Employee (int num, float salary){
//         fuel_allowance = fuel;
//         incentive = incen;

//     };
//     double calculateTotalMonthlyIncome(float basic_salary,float fuel_allowance, float incentive) {
//         return basic_salary + fuel_allowance + incentive;
//     }

//     void display(){
//         cout << "Total income is: " << calculateTotalMonthlyIncome() << endl;
//     }
// };

// int main(){}
//     Manager manager1(12, 2000.0,500.0,100.0);
//     manager1.calculateTotalMonthlyIncome();
//     manager1.display()

//     return 0;
// ;
#include <iostream>
using namespace std;

class Employee {
protected:
    int number;
    float basic_salary;
public:
    Employee(int num, float salary) {
        number = num;
        basic_salary = salary;
    }
};

class Manager : public Employee {
private:
    float fuel_allowance;
    float incentive;
public:
    Manager(int num, float salary, float fuel, float incen) : Employee(num, salary) {
        fuel_allowance = fuel;
        incentive = incen;
    }

    double calculateTotalMonthlyIncome() {
        return basic_salary + fuel_allowance + incentive;
    }

    void display() {
        cout << "Total income is: " << calculateTotalMonthlyIncome() << endl;
    }
};

int main() {
    Manager manager1(1, 5000.0, 2000.0, 500.0);
    manager1.display();

    return 0;
}