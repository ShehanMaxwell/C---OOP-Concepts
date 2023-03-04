#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    fstream myFile;
    myFile.open("maxwell.txt",ios::in); //read mode
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)) {
             cout << line << endl;
        };
        myFile.close();
    };
   
    cout << endl;
    return 0;
}