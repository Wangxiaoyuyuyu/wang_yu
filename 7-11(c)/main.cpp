#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 12;
    array < double, arraySize > monthlyTemperatures
    = { 1.0, 2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0,1.1,1.2};
   for ( size_t i = 0; i < monthlyTemperatures.size(); ++i )
    cout << i << setw(13) << monthlyTemperatures[i] << endl;


}
