#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 5;
    array <int, arraySize >bestScores
    = { 1,2,3,4,5 };
    cout << "Element" << setw(13) << "bestScores" << endl;

   for ( size_t i = 0; i < bestScores.size(); ++i )
    cout << setw(7) << i << setw(13) << bestScores[i] << endl;


}
