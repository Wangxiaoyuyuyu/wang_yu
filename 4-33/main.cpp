#include <iostream>

using namespace std;

int main()
{
    int side1;
    int side2;
    int side3;

    cout <<"Enter side 1 :";
    cin>> side1;

    cout << "Enter side 2 :";
    cin >> side2;

    cout << "Enter side 3 :";
    cin >> side3;

    int side1Square = side1 * side1;
    int side2Square = side2 * side2;
    int side3Square = side3 * side3;

    if ((side1Square + side2Square) == side3Square )
        cout << "It's a right triangle";
    else if ((side2Square + side3Square) == side1Square )
        cout << "It's a right triangle ";
    else if ((side3Square + side1Square )== side2Square )
        cout << "It's a right triangle ";
    else
        cout << "These don't form a right triangle." << endl;
}
