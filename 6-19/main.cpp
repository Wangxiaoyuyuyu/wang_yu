#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse( double,double );

int main()
{
    double side1;
    double side2;

    cout << fixed ;

    for ( int i = 1; i <= 3; i++ )
    {
        cout << "\nEnter 2 sides of right triangle:";
        cin>> side1 >> side2;
        cout << "Hypotenuse:" << setprecision (1) << hypotenuse (side1,side2) << endl;
    }

}

double hypotenuse ( double side1, double side2 )
{
    return sqrt ( side1*side1+side2*side2 );
}
