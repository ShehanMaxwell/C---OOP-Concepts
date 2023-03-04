#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("maxwell.txt",ios::out);// write

    if(myFile.is_open()){
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    };
    myFile.open("maxwell.txt",ios::app);// append mode

    if(myFile.is_open()){
        myFile << "Hello2\n";
        myFile.close();  
    };
    cout << endl;
    return 0;
}