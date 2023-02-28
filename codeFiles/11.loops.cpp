#include <iostream>
using namespace std;

int main()
{
    // for (int i=1; i<=10; i++) {
    //     cout << i << endl;
    // }

    // cout << "You can count to 10";

    string word;

    cout << "Enter the word to spell: ";
    getline(cin, word);

    for (int i=0; i< word.length(); i++) {
        cout << word.at(i) << " ";
    }

    cout << endl;
    return 0;
}