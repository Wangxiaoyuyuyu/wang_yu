#include <iostream>

using namespace std;

int integerPower( int,int );

int main()
{
    int base = 0;
    int exponent = 0;

    cout <<"Enter base and exponent:";
    cin >> base >> exponent;

    cout << base << " to the power" << exponent << " is:"<< integerPower(base,exponent) << endl;
}

int integerPower( int base, int exponent )
{
    int product = 1;
    for ( int i = 1; i <= exponent; i++)
     product *= base;
    return product;
}
