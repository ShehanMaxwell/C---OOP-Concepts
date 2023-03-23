#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        // Default constructor
        Person() {
            name = "John Doe";
            age = 0;
        }

        // Constructor with one argument
        Person(string n) {
            name = n;
            age = 0;
        }

        // Constructor with two arguments
        Person(string n, int a) {
            name = n;
            age = a;
        }

        // Function to display person details
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    // Creating objects using different constructors
    Person p1;
    Person p2("Alice");
    Person p3("Bob", 25);

    // Displaying person details
    p1.display();
    p2.display();
    p3.display();

    return 0;
}