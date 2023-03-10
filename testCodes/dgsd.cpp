#include <iostream>
#include <string>

class Person {
public:
    Person(std::string n, int a) : name(n), age(a) {}
    
    // Overload the less than operator
    bool operator<(const Person& other) const {
        return age < other.age;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person alice("Alice", 25);
    Person bob("Bob", 30);

    if (alice < bob) {
        std::cout << "Alice is younger than Bob" << std::endl;
    } else {
        std::cout << "Bob is younger than Alice" << std::endl;
    }

    return 0;
}