#include <iostream>
using namespace std;


void welcome(string name, int age){
    cout << "Welcome to my program!" << name << endl;
    cout << "You are " << age << " years old" << endl;

};

void goodbye(){
    cout << "Good bye!" << endl;
};

int main()
{
    //functions

    string name;
    int age;

    cout << "Enter your name: " << endl;
    getline(cin, name);

    cout << "Enter your age: " << endl;
    cin >> age;

    welcome(name,age);
    goodbye();

    cout << endl;
    return 0;
}