#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"


class BaseplusEmployee : public CommissionEmployee
{
    public:
        BaseplusCommissionEmployee( const std::string &, const std::string &,
                                   const std::string &, double = 0.0, double = 0.0, double =0.0 );
        virtual ~CommissionEmployee(){ }

        void setBaseSalary( double );
        double getBaseSalary() const;

        virtual double earnings() const override;
        virtual void print() const override;

    private:
        double baseSalary;
};

#endif // BASEPLUS_H
