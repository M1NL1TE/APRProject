#include <iostream>
#include "APR.h"
using namespace std;
int main()
{   //APRPercent loanAmnt years
    double percent, loan, yrs;

    cout << "Calculate an APR loan for a year with daily payouts and adding the daily payouts to the total\n";
    cout << "Enter loan percentage: "; cin >> percent;
    cout << "Enter the amount of the loan: "; cin >> loan;
    cout << "Enter the amount of years: "; cin >> yrs;

    APR Apr1(percent, loan, yrs);
    Apr1.calcAPR();
    Apr1.printAPR();
    
    system("pause");
    return 0;
}