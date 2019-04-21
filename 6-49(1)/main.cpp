#include <iostream>

using namespace std;

inline double square ( const double r )
{
    unsigned pi = 3.14;
    double s;
    s= pi * r * r ;
    return s;
}

int main()
{
    double r;
    cout << "Enter r of your circle:";
    cin >> r;


    cout << "Square of circle with r is"<<s<<endl;
}
