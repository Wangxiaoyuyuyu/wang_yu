#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee employee1( "Lisa","Roberts"£¬4500);
    Employee employee2( "Mark","Stein",4000);
    cout << "Employees' yearly salaries:" << endl;
    cout << "\nEmployees' yesrly salaries after 10% raise:" << endl;

    monthlySalary1=employee1.getMonthlySalary();
    cout << employee1.getFirstName() << " " << employee1.getLisaName()
    << ":$" << monthlySalary * 12 << endl;

    monthlySalary2=employee2.getMonthlySalary();
    cout << employee2.getFirstName() <<" " << employee2.getLastName()
    << ":$" << monthlySalary2*12 << endl;

}
