#include <iostream>

using namespace std;

class Employee {
protected:
    double basic_salary;

public:
    void setBasicSalary(double salary) {
        basic_salary = salary;
    }

    virtual void findSalary() = 0;
};

class Senior_Employee : public Employee {
private:
    double transport_allowance;

public:
    void setTransportAllowance(double allowance) {
        transport_allowance = allowance;
    }

    void findSalary() override {
        double total_salary = basic_salary + transport_allowance;
        cout << "Total Salary of Senior Employee: " << total_salary << endl;
    }
};

int main() {
    Senior_Employee se;
    se.setBasicSalary(50000);
    se.setTransportAllowance(10000);
    se.findSalary();
    return 0;
}