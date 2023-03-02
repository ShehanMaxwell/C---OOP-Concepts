#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string cars[] = { "Corvette" , "Tesla" , "Ferrari" };

    for (int i=0; i < sizeof(cars)/sizeof(cars[0]); i++){
        cout << cars[i];
    };


    cout << endl;
    return 0;
}