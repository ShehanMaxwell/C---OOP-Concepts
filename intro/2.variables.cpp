#include <iostream>
using namespace std;

int main()
{
    int year = 2020;
    double price = 999.99;
    char status = 'N';
    string make = "Ford";
    string model = "Mustang";
    bool for_sale = true;

    string car = make + " " + model;

    for_sale = false;
    price = price * 0.9;

    cout << "Year is:" << year << endl;
    cout << "Price is:" << price << endl;
    cout << "Status is:" << status << endl; 
    cout << "Model is:" << model << endl;
    cout << "For sale:" << for_sale << endl;
    cout << "Car is:" << car << endl;
     
     
     return 0;
}