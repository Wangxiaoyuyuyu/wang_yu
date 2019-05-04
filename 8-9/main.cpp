#include <iostream>

using namespace std;

int main()
{
    int value1 = 200000;
    int value2 = 0;
    long *longPtr;//(a)
    longPtr = &value1;//(b)
    cout << "The value of *longPtr is " << *longPtr << endl;//(c)

    value2 = *longPtr;//(d)
    cout << "The value of value2 is" << value2 << endl;//(e)
    cout << "The address of value1 is " << &value1 << endl;//(f)
    cout << "The address stored in longPtr is " << longPtr << endl;//(g)


}
