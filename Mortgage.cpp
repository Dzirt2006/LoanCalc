//
// Created by dzirt on 9/25/2019.
//

#include "Mortgage.h"
#include <math.h>
#include <iostream>

using namespace std;
double Mortgage::CalcTerm(double r,int y)
{
double term;
term=pow((1+r/12),(12*y));
return term;
}


double Mortgage::CalcInterest(double PVL,double rate){
    double interest;
    interest=pow(PVL,((rate*100)/12));

    return interest;
}


double  Mortgage::CalcPayment(Vars st)
{
    double payment;
    double term;

    term=CalcTerm(st.Rate,st.years);//pass struct members to method
    //std::cout<<term;
    payment=(st.Loan*(st.Rate/12)*term)/(term-1);

    return payment;
}

double Mortgage::TotalCalc(Vars st){
    double TotalPeriod=st.years*12;
    static double PVL=st.Loan;
    double payment=CalcPayment(st);

    do{

        cout<<CalcInterest(PVL,st.Rate)<<' '<<PVL<<endl;
        PVL=PVL-payment;
        TotalPeriod--;
    }while(TotalPeriod!=0);
return 0;
}