#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string name;
    // string age;
    // cout << "Please enter your name: ";
    // getline(cin, name);

    // cout << "Please enter your age: ";
    // cin >> age;

    // cout << "Welcome MR. " << name << endl;
    // cout << "Your age is: " << age << endl;

    string item;
    double price;
    int quantity;
    double total;

    cout << "What item do you want to buy?";
    getline(cin,item);

    cout << "What is the price for each? ($)";
    cin >> price;

    cout << "How many do you want to buy?";
    cin >> quantity;
    cout << endl;

    total = price * quantity;

    cout << "Item is:" << item << endl;
    cout << "Price is:$" << price << endl;
    cout << "x " << quantity << endl;
    cout << "Total price is: $" << total << endl;

    



    return 0;


}