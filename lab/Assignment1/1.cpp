#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout << "Program to find sum of all odd numbers between 1 and 100" << endl;
    int sum=0;
    for(int i=1;i<100;i=i+2)
    {
        sum=sum+i;
    }
    cout << "The sum of all odd numbers between 1 and 100 is: " << sum << endl;
    return 0;
}
