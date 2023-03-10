#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string vehicleNumber;
    double price;
public:
    Vehicle(string num, double p) : vehicleNumber(num), price(p) {}
    virtual double getDiscount() { return 0; }
    virtual double getDiscountedPrice() { return price; }
};

class HeavyVehicle : public Vehicle {
private:
    double discountRate;
    double discountAmount;
public:
    HeavyVehicle(string num, double p, double rate) : Vehicle(num, p), discountRate(rate) {
        calculateDiscount();
    }
    void calculateDiscount() {
        discountAmount = price * discountRate;
    }
    double getDiscount() {
        return discountAmount;
    }
    double getDiscountedPrice() {
        return price - discountAmount;
    }
};

int main() {
    HeavyVehicle myVehicle("1234", 10000, 0.1); // create a heavy vehicle with discount rate of 10%
    cout << "Discount amount: " << myVehicle.getDiscount() << endl;
    cout << "Discounted price: " << myVehicle.getDiscountedPrice() << endl;
    return 0;
}