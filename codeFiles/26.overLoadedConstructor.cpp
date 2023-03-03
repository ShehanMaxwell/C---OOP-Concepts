#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Pizza { 
public:
    string bread;
    string sauce;
    string cheese;
    string topping;

    Pizza(string bread,string sauce,string cheese, string topping){
        this->bread = bread;
        this->sauce = sauce;
        this->cheese = cheese;
        this->topping = topping;
    }
    Pizza(string bread,string sauce,string cheese){
        this->bread = bread;
        this->sauce = sauce;
        this->cheese = cheese;
        
    }
    Pizza(string bread,string sauce){
        this->bread = bread;
        this->sauce = sauce;
                
    }
    Pizza(string bread){
        this->bread = bread;
                    
    }

    void orderPizza() {
        cout << "here is your ";
        if(!bread.empty())
            cout << bread << "-";
        if(!sauce.empty())
            cout << sauce << "-";  
        if(!cheese.empty())
            cout << cheese << "-"; 
        if(!topping.empty())
            cout << topping << " "; 


    cout << "Pizza" << endl;


    }
};

int main()
{
    Pizza first_pizza("thicc crust","red sauce", "motzeralla","peparooni");
    Pizza second_pizza("flat bread","alfredo");

    second_pizza.orderPizza();

    cout << endl;
    return 0;
}