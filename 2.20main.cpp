#include <iostream> // allows program to perform input and output

using namespace std; // program uses names from the std namespace
int main()
{
    int r = 0;
    int diameter = 0;
    int circumference;
    int area = 0;

    cout << "Enter one integer: " ;
    cin >> r;
    diameter = r + r;
    circumference = 2 * 3.14159 * r;
    area = 3.14159 * r * r;
    cout << "diameter is " << diameter << endl;
    cout << "circumference is " << circumference << endl;
    cout << "area is " << area << endl;

}  // end function main
