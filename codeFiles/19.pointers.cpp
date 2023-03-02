#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //pointers
    // & address-of operator
    // * dereference operator

    // string name = "Bro";
    // int age = 100;

    // cout << &name << endl;
    // cout << &age << endl;

    string name = "Bro";
    int age = 100;
    string food = "pizza";

    string* pName = &name;
    int* pAge = &age; 
    string* pFood = &food;

    cout << pName << " " << pAge << " " << pFood << endl;


    cout << endl;
    return 0;
}