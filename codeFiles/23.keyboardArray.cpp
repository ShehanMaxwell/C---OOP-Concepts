#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    char keyboard[4][10] = {

            {'1','2','3','4','5','6','7','8','9','0'},
            {'Q','W','E','R','T','Y','I','O','P','U'},
            {'A','S','D','R','T','Y','I','O','P','U'},
            {'Z','X','Z','R','T','Y','I','O','P','U'},

    };

    for (int row = 0; row < 4; row++) {
        for (int column=0;column < 10; column++) {
                cout <<keyboard[row][column]<<" ";
        };
        cout << endl; 
    };

    cout << endl;
    return 0;
}