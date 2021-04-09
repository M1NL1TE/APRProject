#pragma once

class APR
{
private:
	double APRPercent, addedCap, addedCapTotal, loanAmnt, newloanAmnt, yrs;
	int months, days; 
	
public:
	APR();
	APR(double AP, double LA, double y);

	void calcAPR();
	void printAPR();
};