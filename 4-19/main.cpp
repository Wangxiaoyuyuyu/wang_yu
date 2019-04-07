#include <string>
#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int number = 0;
    int largest = 0;
    int blargest = 0;
    cout << "Please enter ten numbers:";
    while ( counter < 10 )
    {
        cin >> number;
        if (number>largest)
            largest = number;
        if ((number >blargest)& (number!=largest))
            blargest = number;

        counter++;


    }

    cout << largest << endl;
    cout << blargest << endl;
}
