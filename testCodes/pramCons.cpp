#include <iostream>
#include <cstring>

class Student {
public:
    // Parameterized constructor
    Student(int number, const char* name) {
        studentNumber = number;
        studentName = new char[strlen(name) + 1];
        strcpy(studentName, name);
    }

    // Destructor
    ~Student() {
        delete[] studentName;
    }

    // Getter methods
    int getStudentNumber() const {
        return studentNumber;
    }

    const char* getStudentName() const {
        return studentName;
    }

private:
    int studentNumber;
    char* studentName;
};

int main() {
    // Create a student object using the parameterized constructor
    Student student(12345, "John Doe");

    // Print out the student's information
    std::cout << "Student number: " << student.getStudentNumber() << std::endl;
    std::cout << "Student name: " << student.getStudentName() << std::endl;

    // The destructor will automatically be called when the student object goes out of scope
    return 0;
}