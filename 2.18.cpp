#include <iostream>

using namespace std;

// function main begins program execution
int main()
{
    int number1 = 0;
    int number2 = 0;

    cout << "Enter two integers to compare: " << endl;
    cin >> number1 >> number2;

    if ( number1 < number2 )
        cout << number2 << " is large. " << endl;
    if ( number1 > number2 )
        cout << number1 << " is large. " << endl;
    if ( number1 == number2 )
        cout << " These numbers are equal. " << endl;
}  // end function main
