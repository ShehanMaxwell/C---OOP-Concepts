#include <iostream>
using namespace std;

int main()
{
    // string.length() - returns length of a string

    // string first_name;

    // cout << "Enter your first name: ";
    // getline(cin, first_name);

    // int length = first_name.length();

    // if(length >=12 ){
    //     cout << "Your name cant be more than 12 letters.";
    // }
    // else {
    //     cout << "Welocme " << first_name;
    // }

    // string.empty() returns true if empty

    // string first_name;

    // cout << "Enter your name: ";
    // getline(cin, first_name);

    

    // if(first_name.empty() ){
    //     cout << "name is empty";
    // }
    // else {
    //     cout << "name is correct " << first_name;
    // }

    // string user_name;

    // cout << "Enter your name: ";
    // getline(cin, user_name);

    // string email = user_name.append("@ gamil.com");

    
    // cout << "Your email is now: " << email;

    // string first_name;
    // string middle_name;
    // string last_name;

    // cout << "Enter your first name: ";
    // getline(cin, first_name);
    // cout << "Enter your middle name: ";
    // getline(cin, middle_name);
    // cout << "Enter your last name: ";
    // getline(cin, last_name);

    // char letter1 = first_name.at(0);
    // char letter2 = middle_name.at(0);
    // char letter3 = last_name.at(0);

    // cout << "Your initialise are: " << letter1 << letter2 << letter3;
    // string first_name;
    
    // cout << "Enter your first name: ";
    // getline(cin, first_name);

    // string nickname = first_name.substr(0,3); 

    // cout << "Your nickname is: " << nickname << endl;
    // cout << "Hello" << nickname;

    // string1.insert(int x,string2)
    // string user_name;
    // cout << "Enter your user name: ";
    // getline(cin, user_name);
    
    // user_name.insert(0, "@");

    // cout << "reply: " << user_name;
    // string1.find(string2); -returns index of string2

    // string first_name;
    // cout << "Enter your first name: ";
    // getline(cin, first_name);
    
    // string substring;
    // cout << "Search for which character/s?: ";
    // getline(cin, substring);

    // int position = first_name.find(substring);
    
    // cout << "Found character/s at position: " << position;

    // string1.erase(x,y) erase portion of a string.

    string phone_number;
    cout << "Enter your phone number: ";
    getline(cin, phone_number);

    phone_number.erase(0, 4);

    cout << "phone number: " << phone_number;
    cout << endl;
    return 0;
}