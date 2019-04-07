#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    float factorial = 1;
    cout << "Enter n: ";
    cin >> n;

    while ( i <= n )
    {


        factorial *= i;
        ++i;
    }
    while ((n == 0)||(n == 1))
        factorial = 1;

    cout << "Factorial is " << factorial << endl;







}
