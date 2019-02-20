#pragma once
// header file for Mortgage class

class Mortgage

{
private:
	
	
	double Year;
	double Loan;
	double Interest;
	double Payment;
	double Term;
	double TotalPaid;

public:
	void setLoan(double);
	void setYear(double);
	void setInterest(double);
	void setTerm(double);
	double getLoan() const;
	double getYear() const;
	double getInterest() const;



	double FindPayment();
	double FindTerm(double, double);
	double FindTotal();



	Mortgage(double, double, double);
	Mortgage();
};