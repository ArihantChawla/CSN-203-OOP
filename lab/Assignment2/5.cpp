#include<iostream>
using namespace std;
void swap_by_reference(int &a, int &b);
void swap_by_reference(double &a, double &b);
int main()
{
    while(1)
    {
        int n;
        cout << "\n--------------------------------\nPress:\n0.To Exit\n1. To work on integers\n2. To work on doubles"<< endl;
        cin >> n;
        cout << "\n--------------------------------\n";
        int a,b;
        int &x=a, &y=b;
        double c,d;
        double &w=c, &z=d;
        switch (n)
        {
            case 0:
                return 0;
            case 1:             //INT
                cout << "Enter the two integers you want swapped " << endl;
                cin >> a;
                cin >> b;
                swap_by_reference(x,y);
                cout << "The swapped integers are " << a << " and " << b << endl;
                break;
            case 2:
                cout << "Enter the two doubles you want swapped " << endl;
                cin >> c;
                cin >> d;
                swap_by_reference(w,z);
                cout << "The swapped doubles are " << c << " and " << d << endl;
                break;
            default:
                cout << "Invalid Input\n";
        }
    }
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
