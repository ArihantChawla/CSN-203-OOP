#include<iostream>
using namespace std;
int max(int a,int b);
double max(double a,double b);
int main()
{
    cout << max(2,3) << endl << max(4.6,4.7) << endl;
    return 0;
}
int max(int a,int b)
{
    return a>b?a:b;
}
double max(double a,double b)
{
    return a>b?a:b;
}
