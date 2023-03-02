#include <iostream>
using namespace std;

    double add (double num1,double num2) {

        double result = num1 + num2;
        return result;

    };


int main(){
    double number1;
    double number2;

    cout <<"Enter number 1: " << endl;
    cin >> number1;

    cout <<"Enter number 2: " << endl;
    cin >> number2;

    

    double result = add(number1,number2);

    cout << "Result is: " << result << endl;


    cout << endl;
    return 0;
};