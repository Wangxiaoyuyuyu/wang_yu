#include <iostream>


using namespace std;

int main()
{
    int counter = 0, number , largest = 0;

    while (counter < 10 )
    {
        cout << "please enter number: " << endl;
        cin >> number;

        if(number>largest)
            largest = number;
        counter++;
    }
    cout << "largest:"<< largest << endl;
}
