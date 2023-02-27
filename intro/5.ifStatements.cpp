#include <iostream>
using namespace std;

int main()
{

    // int age = 12;

    // if(age >= 18){
    //     cout << "congratulations! You are an adult";
    // }
    // else {
    //     cout << "You are not an adult";
    // }

//--
    // bool adult = false;

    // if(adult){
    //     cout << "congratulations! You are an adult";
    // }
    // else {
    //     cout << "You are not an adult";
    // }

    int temperature;
    cout << "PLease enter the tempreature (c): ";
    cin >> temperature;

    if(temperature >= 30) {
        cout << "It is HOT outside ,:/";
    }
    else if (temperature <= 0){
        cout << "it is COLD outside *brrrrr*";
    }
    else {
        cout << "It is warm outside :)";
    }


    cout << endl;
    return 0;
}