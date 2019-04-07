#include <iostream>

using namespace std;

int main()
{
    double side1 ;
    double side2 ;
    double side3 ;
    int Triangle ;


    cout << "Enter side1 :";
    cin >> side1;

    cout << "Enter side2 :";
    cin >> side2;

    cout << "Enter side3 :";
    cin >> side3;

    if( side1 + side2 > side3)
        cout << "These could be sides to a triangle.";

    else if ( side2 + side3 > side1)
        cout << "These could be sides to a triangle.";

    else if( side3 + side1 > side2)
        cout << "These could be sides to a triangle.";
    else
        cout << "These do not form a triangle.";




}
