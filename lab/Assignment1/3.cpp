#include<iostream>
using namespace std;
double ccl(double a=500.00)
{
    return a;
}
int main()
{
    double a=ccl();
    cout << "Customer Credit Limit function call without argument (default value) is: $" << a << "." << endl;
    cout << "Now enter the customer credit limit you want to print: ";
    cin >> a;
    cout << "Customer Credit Limit function call with custom argument is: $" << a << "." << endl;
}
