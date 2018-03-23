#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string> 

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	string name;
	string address;
	int age;
	string telephone_number;
	int customer_number;
public:
	Customer()
	{ }

	void Setname(string pname)
	{
		name = pname;
	}
	string getname()
	{
		return name;
	}
	void setaddress(string paddress)
	{
		address = paddress;
	}
	string getaddress()
	{
		return address;
	}
	void setage(int page)
	{
		age = page;
	}
	int getage()
	{
		return age;
	}
	void setphonenumber(string pnum)
	{
		telephone_number = pnum;
	}
	string getphone_number()
	{
		return telephone_number;
	}
	void setcustid(int newid)
	{
		customer_number = newid;
	}
	int getid()
	{
		return customer_number;
	}
	virtual double getoverdraft() = 0;
	virtual double getci() = 0;
	virtual double getsi() = 0;
	virtual double getcheckingfee() = 0;

};


class Senior:public Customer
{
	protected:
		double checkinginterestrate = .05;
		double savinginterestrate = .03;
		double overdraft = 65;
		double checkingfee = 7;
public: 
	Senior(string name,string phone, int age, string adress, int custid)
	{}
	double getci()
	{
		return checkinginterestrate;
	}
	double getsi()
	{
		return savinginterestrate;
	}
	double getoverdraft()
	{
		return overdraft;
	}
	double getcheckingfee()
	{
		return checkingfee;
	}
	

};


class Adult : public Customer
{
	protected:
		double checkinginterestrate = .03;
		double savinginterestrate = .02;
		double overdraft = 70;
		double checkingfee = 10;
public:
	Adult(string name, string phone, int age, string adress, int custid)
	{}
	double getci()
	{
		return checkinginterestrate;
	}
	double getsi()
	{
		return savinginterestrate;
	}
	double getoverdraft()
	{
		return overdraft;
	}
	double getcheckingfee()
	{
		return checkingfee;
	}
};

class student : public Customer
{
	protected:
		double checkinginterestrate = .01;
		double savinginterestrate = .01;
		double overdraft = 45;
		double checkingfee = 5;
public:
	student(string name, string phone, int age, string adress, int custid)
	{}
	double getci()
	{
		return checkinginterestrate;
	}
	double getsi()
	{
		return savinginterestrate;
	}
	double getoverdraft()
	{
		return overdraft;
	}
	double getcheckingfee()
	{
		return checkingfee;
	}
};


#endif