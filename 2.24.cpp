#include <iostream> // allows program to perform input and output
using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; //program uses endl

// function main begins program execution

int main()
{
    int number1 = 0;

    cout << " Enter one integer: ";
    cin >> number1; // read one integer from user

    if ( number1%2 == 0 )
        cout <<number1 << "是偶数" << endl;

    if ( number1%2 != 0 )
        cout <<number1 << "是奇数" << endl;
    return 0;
}  // end function main
