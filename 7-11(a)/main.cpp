#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 10;
    array < int , arraySize>counts = {0};

    for (size_t i = 0; i < 10; i++ )
        counts[i] = 0;
    cout << counts[0] << counts[1] << counts[2]
    << counts[3] << counts[4] << counts[5] << counts[6]
    << counts[7] << counts[8] << counts[9] <<endl;

}
