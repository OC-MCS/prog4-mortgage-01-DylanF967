// implementation file for Mortgage class

#include <cstdlib>
#include "Mortgage.h"
#include <cmath>

using namespace std;

// default constructor

Mortgage::Mortgage()
{
	Loan = 0.0;
	Year = 0.0;
	Interest = 0.0;
}

// Constructor for creating an instance with values other than the default

Mortgage::Mortgage(double L, double Y, double Inter)
	{
		Loan = L;
		Year = Y;
		Interest = Inter;
	}

//Sets the number of years the Loan has been paid.

void Mortgage::setYear(double year)
{
	if (year >= 0)
		Year = year;
	else
	{
		
		exit(EXIT_FAILURE);
	}
}



// Gets the amount of the Loan for the program

double Mortgage::getLoan() const
{
	return Loan;
}


// gets the number of years for the program

double Mortgage::getYear() const
{
	return Year;
}




//sets the Loan for the class

void Mortgage::setLoan(double L)
{
	if (L >= 0)
		Loan = L;
	else
	{
		
		exit(EXIT_FAILURE);
	}
}

// gets the interests of the class
double Mortgage::getInterest() const
{
	return Interest;
}

//sets the interest of the class 
void Mortgage::setInterest(double Inter)
{
	if (Inter >= 0)
		
		Interest = Inter/100;
	else
	{
		Interest = Inter;
	}
}

//Finds the payment for month of the instance 

double Mortgage::FindPayment()
{
	Payment = (Loan * (Interest / 12) * Term) / Term - 1;
	return Payment;

}

//Finds the Term of the instance 

double Mortgage::FindTerm(double Rate, double Years)
{
	Term = pow((1 + (Rate / 12)), (12 * Years));
	return Term;
}

//sets the term of the instance
void Mortgage::setTerm(double term)
{
	if (term >= 0)
		Term = term;
	else
	{
		exit(EXIT_FAILURE);
	}
}


//finds the total amount of money paid to the bank for a year
double Mortgage::FindTotal()
{
	TotalPaid = (Payment * 12);
	return TotalPaid;
}