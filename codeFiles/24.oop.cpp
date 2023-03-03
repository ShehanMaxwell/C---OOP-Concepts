#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Human {
public:

    string name;
    int age;
    double weight;

    void eat () {
        cout << this->name <<" is eating" << endl;
    }
    void drink () {
        cout << this->name <<" is drinking " << endl;
    }
    void sleep () {
        cout << this->name <<" is sleeping " << endl;
    }

};


int main()
{
    Human human1;
    Human human2;
    Human human3;

    human1.name = "Rick";
    human1.age = 65;

    human2.name = "Morty";
    human2.age = 25;

    human3.name = "Jerry";
    human3.age = 45;

    human1.drink();
    human2.eat();
    human3.sleep();

    cout << endl;
    return 0;
}