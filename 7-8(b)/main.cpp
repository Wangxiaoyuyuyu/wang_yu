#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    const size_t gradesSize = 5;
    array < double,gradesSize>grades = {0.0,1.1,2.2,3.3,4.4};
    cout << grades[4]<< endl;


}
