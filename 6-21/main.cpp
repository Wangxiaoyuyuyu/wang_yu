#include <iostream>

using namespace std;

int iseven( int );

int main()
{
    int x = 0;

    cout << "Enter an integer" << endl;
    cin >> x;

    cout << iseven( x ) << endl;
}

int iseven( int x)
{
    if( 0 == x%2 )
        return true;
    else
        return false;

}
