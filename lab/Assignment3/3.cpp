#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class city;
class customer
{
	int customerNumber;
	int zipCode;
public:
	friend void display(customer X,city Y);
	customer(int a,int b)
	{
		customerNumber=a;
		zipCode=b;
	}
};
class city
{
	char name[20];
	char state[20];
	int zipCode;
public:
	friend void display(customer X,city Y);
	city(char *n,char *s,int c)
	{
		strcpy(name,n);
		strcpy(state,s);
		zipCode=c;
	}
};
void display(customer X,city Y)
{

	cout<<"Customer number: "<<X.customerNumber<<endl;
	cout<<"City name: "<<Y.name<<endl;
	cout<<"State: "<<Y.state<<endl;
	if(X.zipCode==Y.zipCode)
	{
		cout<<"Zip Code: "<<X.zipCode<<endl;
	}
	else
	{
		cout<<"Zip Codes of customer and city don't match, hmm. Displaying both separately"<<endl;
		cout<<"Zip Code of Customer: "<<X.zipCode<<endl;
		cout<<"Zip Code of City: "<<Y.zipCode<<endl;
	}
}
int main()
{
	cout<<"\n\n----------------------------------------------------\n\nEnter details of the customer"<<endl;
	int customerNumber;
	int customerZipCode;
	cout<<"\nCustomer Number: ";
	cin>> customerNumber;
	ethe:
	cout<<"Customer Zip Code: ";
	cin>> customerZipCode;
	if(customerZipCode<100001||customerZipCode>199999)
	{
		cout<<"Enter a valid zip code"<<endl;
		goto ethe;
	}
	customer X(customerNumber,customerZipCode);
	cout<<"\n\n----------------------------------------------------\n\nEnter details of the city"<<endl;
	char name[20];
	char state[20];
	int CityZipCode;
	cout<<"\nCity: ";
	cin>> name;
	fflush(stdin);
	cout<<"State: ";
	cin>> state;
	fflush(stdin);
	yahan:
	cout<<"City Zip Code: ";
	cin>> CityZipCode;
	if(CityZipCode<100001||CityZipCode>199999)
	{
		cout<<"Enter a valid zip code"<<endl;
		goto yahan;
	}
	city Y(name,state,CityZipCode);
	cout<<"\n\n----------------------------------------------------\n\n";
	display(X,Y);
}
