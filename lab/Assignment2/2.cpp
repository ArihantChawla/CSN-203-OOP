#include<iostream>
using namespace std;
void swap(double* a,double* b);
void swap(int* a,int* b);
int partition (int a[],int low,int high);
double partition (double a[],int low,int high);
void sort(int a[],int low,int high);
void sort(double a[],int low,int high);
int main()
{
    int a[]={1,3,4,8,2,9};
    double b[]={1.4,1.3,1.8,1.6,1.7,1.1};
    sort(a,0,5);
    sort(b,0,5);
    for(int i=0;i<6;i++)
        cout<<a[i] << "  ";
    cout << endl;
    for(int i=0;i<6;i++)
        cout<<b[i] << "  ";
    cout << endl;
        return 0;
}
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void swap(double* a,double* b)
{
    double t=*a;
    *a=*b;
    *b=t;
}
int partition (int a[],int low,int high)
{
    int pivot=a[high];        //pivot at last
    int i=(low-1);
    for (int j=low;j<high;j++)
    {
        if (a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
double partition (double a[],int low,int high)
{
    double pivot=a[high];     //pivot at last
    int i=(low-1);
    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
void sort(int a[],int low,int high)
{
    if(low<high)
    {
        int p=partition(a,low,high);
        sort(a,low,p-1);
        sort(a,p+1,high);
    }
}
void sort(double a[],int low,int high)
{
    if(low<high)
    {
        double p=partition(a,low,high);
        sort(a,low,p-1);
        sort(a,p+1,high);
    }
}
