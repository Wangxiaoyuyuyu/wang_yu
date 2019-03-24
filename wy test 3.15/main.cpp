#include <iostream>
#include <string>

using namespace std;
class date
{
public:
    Date( int,int,int );
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void displayDate();

private:
    int month;
    int day;
    int year;

};


