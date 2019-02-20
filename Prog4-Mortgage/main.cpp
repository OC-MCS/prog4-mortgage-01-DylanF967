
//Dylan Fortney
// Programming 2
// Mortgage


#include <iostream>
#include "Mortgage.h"
#include <string>

using namespace std;


//This calls all the member functions and gets the needed values from them and it asks the user for the needed starting info
//such as the interest on the loan and the number of years they have been paying the loan.
//Now the problem I have run into so checking to make sure the user inputted a Number. Isdigit and all of those works for strings but I need the input to be a double so I can actually use it for math.
// I am at a loss as to how to approach this issue, I tried reading the double into a string and then checking the string to see if it contained a number
// but I couldn't figure out how to create the correct size of the string for the information.
// So far every time I've gotten stuck it's been a simple fix such as realizing strcpy_s takes 3 parameters/arguements. I always get mixed up which is which. 
// So I'm hoping the fix for this is also simple but I am unable to figure it out.

int main()
{
	Mortgage House;
	double Year;
	double Interest;
	double Loan;
	double Payment;
	double Term;
	double TotalPaid;
	

	cout << "What is the interest on this loan? Note that this is a percentage so you need to put in a decimal such as .12 for 12% interest" << endl;
	cin >> Interest;
	
	



	cout << "What is the number of years you've been paying this loan?" << endl;
	cin >> Year;
	cout << "What is the Loan itself?" << endl;
	cin >> Loan;

	House.setInterest(Interest);
	House.setLoan(Loan);
	House.setYear(Year);

	

	
	Term = House.FindTerm(Interest, Year);
	House.setInterest(Term);

	


	
	cout << "This is the amount you must pay every month: $" << House.FindPayment() << endl;
	cout << "This is the total amount you will have paid by the end of the year: $" << House.FindTotal();

}