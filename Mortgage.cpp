//
// Created by dzirt on 9/25/2019.
//

#include "Mortgage.h"
#include <math.h>


double Mortgage::CalcTerm(double r,int y)
{
double term;
term=pow((1+r/12),(12*y));
return term;
}

double  Mortgage::CalcPayment(Vars st)
{
    int payment;
    double term;
    term=CalcTerm(st.Rate,st.years);//pass struct members to method
    payment=(st.Loan*(st.Rate/12)*term)/(term-1);
    return payment;
}