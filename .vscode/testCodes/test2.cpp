#include <iostream>
using namespace std;

double add (double num1,double num2) {
    double total = num1 + num2;

    return total;
};


int main () {
    double number1;
    double number2;

    cout << "Enter number 1: " << endl;
    cin >> number1;

    cout << "Enter number 2: " << endl;
    cin >> number2;

    double total = add(number1,number2);

    cout << "Total is: " << total << endl;

    
    
    cout << endl;
    return 0;

};