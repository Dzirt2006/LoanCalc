//
// Created by dzirt on 9/25/2019.
//

#ifndef LOANCALC_MORTGAGE_H
#define LOANCALC_MORTGAGE_H

struct Vars{
    signed int Loan;
    double Rate;
    int years;
};


class Mortgage {
//prototypes
private:
    double CalcTerm(double,int);
public:
    double CalcPayment(Vars);
//initialize struct
Vars Joey={10000,0.4,20};


};


#endif //LOANCALC_MORTGAGE_H
