#include <iostream>
#include <iomanip>
using namespace std;
int qualityPoints ( double);

int main()
{
    int grade = 0;
    cout << "Enter a student's grade:";
    cin >> grade;
    cout << "The number belongs to :" << qualityPoints(grade)<< endl;
}

int qualityPoints(double grade)
{
    int i = 0;

    if ( grade >= 90 && grade <= 100 )
        return 4;
    else if ( grade >= 80 && grade <=89 )
        return 3;
    else if ( grade >=70 && grade <= 79 )
        return 2;
    else if ( grade >= 60 && grade <= 69 )
        return i;


}
