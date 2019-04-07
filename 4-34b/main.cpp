#include <iostream>

using namespace std;

int main()
{
int i = 1;
int accuracy;
int factorial = 1;
unsigned int e = 1.0;

cout << "Enter desired accuracy of e:";
cin >> accuracy;

while ( i < accuracy )
{

  factorial *= i;
  e += 1.0/factorial;
  i++;

}
cout << "e is" << e << endl;
}
