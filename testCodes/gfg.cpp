#include <iostream>

using namespace std;

class Account {
public:
    virtual float getInterest(float account_balance, float interest_rate) {
        return account_balance * interest_rate;
    }
};

class Saving_Account : public Account {
private:
    float balance;
    float interest_rate;
public:
    Saving_Account(float init_balance, float init_interest_rate) {
        balance = init_balance;
        interest_rate = init_interest_rate;
    }
    float getInterest() {
        if (balance > 50000) {
            interest_rate += 0.02;
        }
        float interest_amount = Account::getInterest(balance, interest_rate);
        cout << "Interest amount: " << interest_amount << endl;
        return interest_amount;
    }
};

int main() {
    Saving_Account sa(75000, 0.05);
    sa.getInterest();
    return 0;
}