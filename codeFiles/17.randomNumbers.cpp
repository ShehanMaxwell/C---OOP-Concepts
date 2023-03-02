#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h> //srand,rand
#include <time.h> //time
using namespace std;

int main() {

//pseudo-random numbers

srand(time(NULL));

int number1 = rand() % 20 + 1;
int number2 = rand() % 20 + 1;
int number3 = rand() % 20 + 1;

cout << number1 << " " << number2 << " " << number3 << endl; 


cout << endl;
return 0;
};