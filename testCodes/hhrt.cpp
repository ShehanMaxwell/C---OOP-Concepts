#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book {
    private:
        string bookNumber;
        string bookTitle;

    public:
        void recordData() {
            ofstream file("Book.txt", ios::app);  // Open the file for writing (append mode)
            cout << "Enter book number: ";
            cin >> bookNumber;  // Read the book number from the user
            cout << "Enter book title: ";
            cin.ignore();  // Ignore any remaining input characters in the input stream
            getline(cin, bookTitle);  // Read the book title from the user
            file << bookNumber << "," << bookTitle << endl;  // Write the book number and title to the file
            file.close();  // Close the file
        }

        void readData() {
            ifstream file("Book.txt");  // Open the file for reading
            string line;
            string number;
            string title;
            cout << "Enter book number to search: ";
            cin >> number;  // Read the book number to search for from the user
            while (getline(file, line)) {  // Loop through each line in the file
                size_t pos = line.find(",");  // Find the position of the comma in the line
                if (pos != string::npos) {  // If a comma is found
                    string token = line.substr(0, pos);  // Extract the book number from the line
                    if (token == number) {  // If the book number matches the search number
                        title = line.substr(pos+1);  // Extract the book title from the line
                        cout << "Book title: " << title << endl;  // Print the book title
                        break;  // Exit the loop
                    }
                }
            }
            file.close();  // Close the file
        }
};