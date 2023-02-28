#include <iostream>
using namespace std;

int main()
{
    // while loops

    // string name;

    //  while (name.empty()){
    //     cout << "Please enter your name" << endl;
    //     getline(cin, name);
    //  }

    //  cout << "Welcome " << name;

    // do while loops

    string answer;

     do {

        cout << "You are playing THE GAME" << endl;
        cout << "*pew pew *";
        cout << "press q to quit!" << endl;
        getline(cin, answer);
        cout << "****************************" << endl;

     } while (answer.at(0)!='q' && answer.at(0)!='Q'); {
            cout << "you have quit the game :(";
     }


    cout << endl;
    return 0;
}