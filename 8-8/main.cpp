#include <iostream>

using namespace std;

int main()
{
    int SIZE = 5;
    unsigned int values [SIZE]={2,4,6,8,10};
}//(a)
unsigned int *vPtr;//(b)

cout << fixed << showpoint << setprecision( 1 );
for( size_t i = 0; i <SIZE; ++i)
 cout << values[ i ] << ' ';//(c)

vPtr = values;
vPtr = &values[0];//(d)

cout << fixed << showpoint << setprecision( 1 );
for ( size_t j = 0; j < SIZE; ++j )
    cout << *(vPtr + j ) << ' ';//(e)

cout << fixed << showpoint << setprecision( 1 );
for( size_t k = 0; k < SIZE; ++k )
    cout << *(values + k) << ' ';//(f)

cout << fixed << showpoint << setprecision( 1 );
for ( size_t m = 0; m <SIZE; ++m )
    cout << vPtr[m] << ' ';//(g)

values[5]
*( values + 5 )
vPtr[ 5 ]
*( vPtr + 5 )//(h)

1002500+3*3= 1002509 , 3.3//(i)

vPtr 指向的地址是value[4]= 1002500 + 4*2 = 1002508;
执行后引用地址是 1002500 , 2
