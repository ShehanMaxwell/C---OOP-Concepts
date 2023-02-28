#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int month;
    // cout << "Enter the month (1-12):";
    // cin >> month;

    // switch (month)
    // {
    // case 1: 
    //     cout << "It is january";
    //     break;
    // case 2: 
    //     cout << "It is february";
    //     break;
    // case 3: 
    //     cout << "It is march";
    //     break;
    // case 4: 
    //     cout << "It is aprail";
    //     break;
    // case 5: 
    //     cout << "It is may";
    //     break;
    // case 6: 
    //     cout << "It is june";
    //     break;
    // case 7: 
    //     cout << "It is july";
    //     break;    
    // case 8: 
    //     cout << "It is august";
    //     break;
    // case 9: 
    //     cout << "It is september";
    //     break;
    // case 10: 
    //     cout << "It is octomber";
    //     break;
    // case 11: 
    //     cout << "It is november";
    //     break;
    // case 12: 
    //     cout << "It is december";
    //     break;
    // default:
    //     cout << "Not a correct number between (1-12)";
    //     break;
    
    // }

    char answer;

     cout << "What letter grade did you get (A - F): ";
     cin >> answer;

     switch (answer)
     {
     case 'A':
        cout << "You did PERFECT!"; 
        break;
    case 'B':
        cout << "You did good !"; 
        break;
    case 'C':
        cout << "You did okay !"; 
        break;
     case 'D':
        cout << "You did not do so good!"; 
        break;
    case 'F':
        cout << "You failed !"; 
        break;

     default:
        cout << "Enter a vaild grade (A/B/C/D/F)";
        break; 
     }

    cout << endl;
    return 0;
}