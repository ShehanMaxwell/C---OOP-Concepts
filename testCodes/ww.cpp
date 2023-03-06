#include <iostream>
using namespace std;

class Vehicle {
protected:
    int vehicleNumber;
    double price;

public:
    void setData(int vn, double pr) {
        vehicleNumber = vn;
        price = pr;
    }
};

class HeavyVehicle : public Vehicle {
private:
    double discountRate;
    double discountAmount;

public:
    void setDiscountRate(double dr) {
        discountRate = dr;
        discountAmount = price * discountRate;
    }

    void displayDiscountedPrice() {
        double discountedPrice = price - discountAmount;
        cout << "Discounted price of heavy vehicle with Vehicle Number " << vehicleNumber << " is $" << discountedPrice << endl;
    }
};

int main() {
    HeavyVehicle hv;
    hv.setData(123, 50000);
    hv.setDiscountRate(0.1);
    hv.displayDiscountedPrice();

    return 0;
}