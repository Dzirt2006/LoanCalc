#include <iostream>
#include "Mortgage.h"

using namespace std;

int main() {
Mortgage calc;
/*double out=calc.CalcPayment(calc.Joey);
cout<<"Your payment based on "<<"\n"<<"     Years: "<<calc.Joey.years<<"\n"
<<"     Rate: "<<calc.Joey.Rate<<'%'<<"\n"<<"     Loan amount: "<<calc.Joey.Loan<<'$'<<"\n"
<<" will be : "<< out<<"$";*/
calc.TotalCalc(calc.Joey);
    return 0;
}