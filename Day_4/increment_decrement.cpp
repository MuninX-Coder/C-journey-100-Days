#include <iostream>
using namespace std;

int main()
{
    int x = 4;         // initilization and declartaion, x = 4
    cout << x << endl; // prints the value of x, which is 4.
    x++;               // increase the value of x by 1, now x = 5  (post increment)
    cout << x << endl; // prints the new value of x, which is 5
    x--;               // reduce the value of x by 1, now x = 4   (post decrement)
    cout << x << endl; // prints the new value of x, which is 4
    ++x;               // again increase the value of x by 1, now x = 5   (pre increment)
    cout << x << endl; // again print the new value
    --x;               // again decrease the value of x by 1 , now x = 4   (pre decrement)
    cout << x << endl; // again print the new value

    // post increment - first use the value then after that increase the value
    // post increment - first increase the value then print the value

}