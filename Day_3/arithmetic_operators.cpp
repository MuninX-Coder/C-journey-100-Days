#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 2;
    cout << x + y << endl;     // addition (+)
    cout << x - y << endl;          // subtraction (-)
    cout << x * y << endl;  // multiplication (*)
    cout << x / y << endl; // division (/)  , decimal part will not be print, we have to use float instead of int
    cout << x % y << endl;   // modelus (%) get the remainder

    float new_x = 7.34, new_y = 2.34;  // now we will get the decimal part value

    cout << new_x + new_y << endl;
    cout << new_x - new_y << endl;
    cout << new_x * new_y << endl;
    cout << new_x / new_y << endl;
    
    
}