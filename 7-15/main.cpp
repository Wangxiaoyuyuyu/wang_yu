#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t rows = 3;
const size_t columns = 5;
void printArray( const array<array< int,columns >, rows >& );

int main()
{
   array< array < int,columns >, rows > sales ={};

   cout << " [0] [1] [2] "<< endl;
   for ( size_t row = 0; row < sales.size(); ++row )
        for (size_t column = 0; column < sales[row].size(); ++column )
        sales[ row ][ column ]= 0;
        cout << setw(3) << sales[rows][ columns ] << " ";
        cout << endl;

}
