#include<iostream>
#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
static int success;
static int unsuccess;
using namespace std;
class book
{
	char title[30];
	char author[20];
	char publisher[30];
	int stock;
public:
	float price;
	void getval()
	{
		cout<<"Enter title of new book: ";
		cin>>title;
		fflush(stdin);
		cout<<"Enter author of new book: ";
		cin>>author;
		fflush(stdin);
		cout<<"Enter price of new book: ";
		cin>>price;
		fflush(stdin);
		cout<<"Enter publisher of new book: ";
		cin>>publisher;
		fflush(stdin);
		cout<<"Enter no. of copies available: ";
		cin>>stock;
		fflush(stdin);
	}
	char* returnTitle()
	{
		return title;
	}
	char* returnAuthor()
	{
		return author;
	}
	void numberCopies(int num)
	{
		if(num>stock)
			cout<<"\nRequired copies not in stock";
		else
			cout<<"TOTAL BILL= "<<num*price;
	}
	void display()
	{
		cout<<"TITLE: "<<title<<endl;
		cout<<"AUTHOR: "<<author<<endl;
		cout<<"PRICE: "<<price<<endl;
		cout<<"PUBLISHER: "<<publisher<<endl;
		cout<<"NO. OF COPIES AVAILABLE: "<<stock<<endl;
	}
};
int main()
{
	cout << "\n\n----------------------------------------------------\n\n\tWelcome to Arihant Publishing Company\n\n----------------------------------------------------\n\n";
	book stock[1000];
	int k,n=-1,i,num;
	char newTitle[30],newAuthor[20];
	while(1)
	{
		cout<<"1.New book entry.\n2.Buy a book.\n3.Update Price of a book\n4.Exit.\n"<<endl;
		cin>>k;
		switch(k)
		{
		case 1:
			n++;
			cout<<"\n\n----------------------------------------------------\n\n\n";
			stock[n].getval();
			cout<<"\n\n----------------------------------------------------\n\n";
			success++;
			break;
		case 2:
			cout<<"\n\n----------------------------------------------------\n\nEnter title of book you want to buy: ";
			cin>>newTitle;
			cout<<"Enter author of book you want to buy: ";
			cin>>newAuthor;
			for(i=0;i<=n;i++)
			{
				if(!strcmp(newTitle,stock[i].returnTitle()) && !strcmp(newAuthor,stock[i].returnAuthor()))
				{
					float k;
					cout<<"Enter the new price of the book: ";
					cin>>k;
					stock[i].price=k;
					cout<<"Price of the book updated";
					success++;
					break;
				}
			}
			if(i==n+1)
			{
				unsuccess++;
				cout<<"\nBook not available. Try another one."<<endl;
			}
			break;
		case 3:
			cout<<"\n\n----------------------------------------------------\n\nEnter title of book you want to update the price of: ";
			cin>>newTitle;
			cout<<"Enter the author of book: ";
			cin>>newAuthor;
			for(i=0;i<=n;i++)
			{
				if(!strcmp(newTitle,stock[i].returnTitle()) && !strcmp(newAuthor,stock[i].returnAuthor()))
				{
					cout<<"Enter number of copies you want to buy: ";
					cin>>num;
					stock[i].numberCopies(num);
					success++;
					break;
				}
			}
			if(i==n+1)
			{
				unsuccess++;
				cout<<"\nBook not available. Try another one."<<endl;
			}
			break;
		case 4:
			return 0;
		default:
			continue;
		}
		cout<<endl<<endl;
	}
	return 0;
}
