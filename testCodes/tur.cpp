#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    double salary;

public:
    void get(int id);
    void get(string name);
    void get(double salary);
};