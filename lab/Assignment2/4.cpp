#include<iostream>
using namespace std;
int main()
{
    cout << "Enter number of elements:   ";
    int n;
    cin >> n;
    if(n%2==1)
    {
        int a[n];
        int ans=0;
        cout << "Enter elements of the array" << endl;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            ans=ans^a[i];
        }
        cout <<"The element occuring odd number of times is " << ans << endl;
    }
    else
        cout << "Invalid Input\n";
}
