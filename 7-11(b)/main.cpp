#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 15;
    array < int , arraySize> bonus = {0};

    for (size_t i = 0; i < 15; i++ )
        bonus[i] += 1;
    cout << bonus[0] << bonus[1] << bonus[2]
    << bonus[3] << bonus[4] << bonus[5] << bonus[6]
    << bonus[7] << bonus[8] << bonus[9] <<endl;

}
