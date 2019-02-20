
//Dylan Fortney
// Programming 2
// Mortgage


#include <iostream>
#include "Mortgage.h"
#include <string>
#include <iomanip>

using namespace std;


//This calls all the member functions and gets the needed values from them and it asks the user for the needed starting info
//such as the interest on the loan and the number of years they have been paying the loan.
//Well I thought the to_string would fix the issue I was having but if I put in anything but a number it just crashes
//So again I'm unsure how to fix this issue.

int main()
{
	Mortgage House;
	double Year;
	double Interest;
	double Loan;
	double Payment;
	double Term;
	double TotalPaid;
	

	cout << "What is the interest on this loan?" << endl;
	cin >> Interest;
	
	//This is what I thought would check to make sure the value was a number before going on to the next cin.
	//However the program doesn't reach this point instead it just crashes as soon as the cin gets anything but a number.

	string Interest_s;
	Interest_s = to_string(Interest);
	while (!isdigit(Interest_s [0]))
	{
		cout << "Please input a valid number." << endl;
		cin >> Interest;
	}


	cout << "What is the number of years you've been paying this loan?" << endl;
	cin >> Year;
	cout << "What is the Loan itself?" << endl;
	cin >> Loan;

	House.setInterest(Interest);
	House.setLoan(Loan);
	House.setYear(Year);

	

	
	Term = House.FindTerm(Interest, Year);
	House.setInterest(Term);

	


	
	cout << "This is the amount you must pay every month: $" << fixed << showpoint << setprecision(2) << House.FindPayment() << endl;
	cout << "This is the total amount you will have paid by the end of the year: $" << fixed << showpoint << setprecision(2) << House.FindTotal();

}