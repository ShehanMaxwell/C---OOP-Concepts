#include <iostream>
using namespace std;

class Food {
protected:
    double unit_price;
    int number_of_units;
public:
    Food (double price, int units){
        unit_price = price;
        number_of_units = units;
    };
    virtual double getbill() = 0;
};

class Delivery_Food : public Food {
private: 
    double delivery_charge;

public:
    Delivery_Food (double price, int units,double delivery) : Food(price,units) {
        double delivery_charge = delivery;

            };
        double getbill(){
            return (unit_price * number_of_units) + delivery_charge;
        }
};

int main () {
    Delivery_Food deliveryfood1(100,30,5.0);

    double bill_amount = deliveryfood1.getbill();
    cout << "bill is: " << bill_amount << endl;


};