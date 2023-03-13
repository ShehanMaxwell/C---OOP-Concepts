#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
    string name;
    double bill_amount;
};

class Local_Customer : public Customer {
public:
    double discount_rate;
    double calculate_final_bill(){
        return bill_amount - (bill_amount * discount_rate / 100.0);
    }
};

int main () {
    Local_Customer customer1;

    cout << "Enter Customer Name: ";
    getline(cin, customer1.name);

    cout << "Enter Bill Amount: ";
    cin >> customer1.bill_amount;

    cout << "Enter Discount rate: ";
    cin >> customer1.discount_rate;

    double final_bill = customer1.calculate_final_bill();

    cout << "Final bill amount is: " << final_bill << endl;

    return 0;
}