#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Human {
public:

    string name;
    int age;
    double weight;

    Human(string name,int age,double weight){

        this->name = name;
        this->age = age;
        this->weight = weight;

    };

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
    //constructor = special function that is automatically called when an object is instantiated.
    //usefull for assigning arguments to variables   

    Human human1("Rick",65,80);
    Human human2("Morty",25,60);
    Human human3("Jerry",45,85);
    

    cout << human3.name << endl;
    cout << human3.age << endl;
    cout << human3.weight << endl;
    

    cout << endl;
    return 0;
}