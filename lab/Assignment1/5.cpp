#include<iostream>
using namespace std;
void swap_by_reference(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
/*
void swap_by_reference(char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
}
void swap_by_reference(float &a, float &b)
{
    float temp=a;
    a=b;
    b=temp;
}
void swap_by_reference(double &a, double &b)
{
    double temp=a;
    a=b;
    b=temp;
}
*/
int main()
{
    int a,b;
    cout << "Enter the two numbers you want swapped " << endl;
    cin >> a;
    cin >> b;
    int &x=a, &y=b;
    swap_by_reference(x,y);
    cout << "The swapped numbers are " << a << " and " << b << endl;
    return 0;
}
