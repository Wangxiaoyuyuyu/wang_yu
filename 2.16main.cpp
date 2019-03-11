#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int sum = 0;
    int multiply = 0;
    int subtract = 0;
    int divide = 0;

    cout << "Enter two integers: ";
    cin >> x >> y;
    sum = x + y;
    multiply = x * y;
    subtract = x - y;
    divide = x / y;
    cout << "Sum is " << sum << endl;
    cout << "multiply is " << multiply << endl;
    cout << "subtract is " << subtract << endl;
    cout << "divide is " << divide << endl;
}  // end function main
