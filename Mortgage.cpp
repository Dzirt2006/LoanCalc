//
// Created by dzirt on 9/25/2019.
//

#include "Mortgage.h"
#include <math.h>
#include <iostream>
#include <iomanip>

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
    cout << fixed ;
    cout<<endl;
    cout<<"Your current loan amount is: "<<setprecision(2)<<st.Loan<<" $"<<endl;
    cout<<"Loan interest is: "<<st.Rate*100<<" %"<<endl;
    cout<<"Amount of years is: "<<st.years<<endl<<endl;
    cout<<"Cycles"<<setw(19)<<"Current loan"<<setw(17)<<"Payment"<<setw(21)<<"Interest"<<endl<<endl;
    do{

        cout<<setprecision(0)<<TotalPeriod<<setw(20)<< setprecision(2)<<PVL<<setw(20)<< setprecision(2)<<payment<<setw(20)<<      setprecision(2)<<CalcInterest(PVL,st.Rate)<<endl;
        PVL=PVL-payment;

        TotalPeriod--;
    }while(TotalPeriod!=0);
return 0;
}