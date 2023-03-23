#include<iostream>
using namespace std;

class Employee {
private: 
    int employee_id;
    string employee_name;
    double employee_salary;
public:
    void get(int id);
    void get(string name);
    void get(double salary);

};