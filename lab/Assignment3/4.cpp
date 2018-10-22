#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class salesperson;
class sale
{
	int date;
	int amount;
	int ID;
public:
	sale(int a,int b,int c)
	{
		date=a;
		amount=b;
		ID=c;
	}
	friend void display(sale S1,salesperson SP);
};
class salesperson
{
	int ID;
	char name[20];
public:
	salesperson(char *n,int b)
	{
		ID=b;
		strcpy(name,n);
	}
	friend void display(sale S1,salesperson SP);
};
void display(sale S1,salesperson SP)
{
	cout<<"Date of Sale: "<<S1.date<<endl;
	cout<<"Amount of Sale:"<<S1.amount<<endl;
	cout<<"Name: "<<SP.name<<endl;
	if(S1.ID==SP.ID)
	{
		cout<<"ID: "<<S1.ID<<endl;
	}
	else
	{
		cout<<"ID of sales and salesperson don't match, Your circuit's dead, there's something wrong. Displaying both separately"<<endl;
		cout<<"ID of person who carried out the sale: "<<S1.ID<<endl;
		cout<<"ID of salesperson "<<SP.ID<<endl;
	}
}
int main()
{
	cout<<"\n\n----------------------------------------------------\n\nEnter the details of the sales\n";
	int date;
	int amount;
	int SalesID;
	yahan:
	cout<<"\nDate of Sale: ";
	cin>>date;
	if(date<1||date>31)
	{
		cout<<"Enter a valid date of the month"<<endl;
		goto yahan;
	}
	cout<<"Amount of Sale: ";
	cin>> amount;
	cout<<"ID of sale: ";
	cin>> SalesID;
	sale S(date,amount,SalesID);
	cout<<"\n\n----------------------------------------------------\n\nEnter the details of the sales\n";
	int SalespersonID;
	char name[20];
	cout<<"\nName of salesperson: ";
	cin>> name;
	fflush(stdin);
	cout<<"ID of salesperson: ";
	cin>> SalespersonID;
	salesperson SP(name,SalespersonID);
	cout<<"\n\n----------------------------------------------------\n\n";
	display(S,SP);
}
