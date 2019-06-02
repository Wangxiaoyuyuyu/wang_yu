#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"
using namespace std;

class Employee
{
public:
    Employee( const string &, const string &, const string &,
             int, int, int);

    void setFirstName( const string & );
    string getFirstName() const;

    void setLastName( const string & );
};
#endif // EMPLOYEE_H
