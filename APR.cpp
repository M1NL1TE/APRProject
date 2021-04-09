#include <iostream>
#include "APR.h" 

APR::APR() {
	APRPercent = 0; addedCap = 0; addedCapTotal = 0; loanAmnt = 0; newloanAmnt = 0; yrs = 0; months = 0; days = 0;
}

APR::APR(double AP, double LA, double y)
{
	APRPercent = (AP / 100); addedCap = 0; addedCapTotal = 0; loanAmnt = LA; newloanAmnt = 0; yrs = y; months = (y * 12); days = (yrs * 365);
}

void APR::calcAPR()
{

	for (int i = 1; i <= days; i++)
	{
			addedCap = ((loanAmnt * APRPercent) / 365);
			addedCapTotal += addedCap;
			loanAmnt += addedCap;
	}

	/*if (days == 365){
		return;
	}
	else {
		days++;
		return calcAPR();
	}*/
}

void APR::printAPR()
{
	std::cout << "Loan amount after year(s): " << loanAmnt << "\n";
	std::cout << "Total amount of extra capital added from interest: " << addedCapTotal << "\n";
	
}
