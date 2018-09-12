#include<iostream>
using namespace std;
void swap_by_reference(int &a, int &b);
void swap_by_reference(double &a, double &b);
int main()
{
    return 0;
}
void swap_by_reference(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void swap_by_reference(double &a, double &b)
{
    double temp=a;
    a=b;
    b=temp;
}
