#include <iostream>

using namespace std;

int main()
{
    double radius;
    double pi = 3.14159;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "The diameter is " << radius * 2;
    cout << "\nThe circumference is " << 2* pi * radius;
    cout << "\nThe area is " << 2*pi*radius<< endl;
}
