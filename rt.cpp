#include <iostream>
using namespace std;

class Item {
protected:
    int itemCode;
    float itemPrice;
public:
    void setItemData(int code, float price) {
        itemCode = code;
        itemPrice = price;
    }
};

class Luxury_Item : public Item {
private:
    float discountRate;
public:
    void setDiscount(float rate) {
        discountRate = rate;
    }

    float getDiscount() {
        return itemPrice * discountRate / 100;
    }

    void display() {
        cout << "Item Code: " << itemCode << endl;
        cout << "Discount: " << getDiscount() << endl;
    }
};

int main() {
    Luxury_Item X;
    X.setItemData(123, 500);
    X.setDiscount(10);
    X.display();
    return 0;
}