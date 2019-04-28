#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 100;
    array < double,arraySize > temperatures = {1.1};

    double total = 0;

    for( size_t i = 0; i < 100; ++i )
        total += temperatures[i];

    cout << "Total of array elements:" << total << endl;
    return 0;
}
