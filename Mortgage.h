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
    double CalcInterest(double,double);
    double CalcPayment(Vars);
public:
    double TotalCalc(Vars);
//initialize struct
Vars Joey={10000,0.04,1};//amount/percent/years


};


#endif //LOANCALC_MORTGAGE_H
