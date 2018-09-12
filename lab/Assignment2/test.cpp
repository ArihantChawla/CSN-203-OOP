#include<iostream>
using namespace std;
void swap(int* a,int* b);
int partition (int arr[],int ind[],int low,int high);
void quickSort(int arr[],int ind[],int low,int high);
class student
{
public:
    char name[15];
    int roll_no;
    char dob_in_dd_mm_yyyy_format[10];
    int marks_in_subject[5];
    char grade_in_subject[5];
};
int main()
{
    int n;
    cout << "Enter the number of students in class:    ";
    cin >> n;
    student bache[n];
    int ind[5][n];
    for(int i=0;i<n;i++)
    {
        cout << "\nEnter the name of student " << i+1 << " : " << endl;
        cin >> bache[i].name;
        cout << "\nEnter the roll number of student " << i+1 << " : " << endl;
        cin >> bache[i].roll_no;
        cout << "\nEnter the marks of student  " << i+1 << " : " << endl;
        for(int j=0;j<5;j++)
        {
            ind[j][i]=i;
            cout << "In subject " << j+1 << ": ";
            cin >> bache[i].marks_in_subject[j];
        }
        cout << "\n";
    }
    int temp_marks[5][n];
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<n;i++)
        {
            temp_marks[j][i]=bache[i].marks_in_subject[j];
        }
    }
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout << temp_marks[j][i] << " ";
        }
        cout << "\n";
    }
    for(int j=0;j<5;j++)
        quickSort(temp_marks[j],ind[j],0,n-1);
        cout << "\n";
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<n;i++)
        {
            if((i<n/4)&&(i>=0))
                bache[ind[j][i]].grade_in_subject[j]='D';
            else if(i<n/2&&i>=n/4)
                bache[ind[j][i]].grade_in_subject[j]='C';
            else if(i<(3*n)/4&&i>=n/2)
                bache[ind[j][i]].grade_in_subject[j]='B';
            else if(i<n&&i>=(3*n)/4)
                bache[ind[j][i]].grade_in_subject[j]='A';
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << "For Student " << i+1 << ", the grades are as follows:\n";
        for(int j=0;j<5;j++)
        {
            cout << "In subject " << j+1 << ": ";
            cout << bache[i].grade_in_subject[j] << "\n";
        }
        cout << "\n";
    }

}
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition (int arr[],int ind[],int low,int high)
{
    int pivot=arr[high];
    int i=(low - 1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
            swap(&ind[i],&ind[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    swap(&ind[i+1],&ind[high]);
    return (i+1);
}
void quickSort(int arr[],int ind[],int low,int high)
{
    if (low<high)
    {
        int pi = partition(arr,ind,low,high);
        quickSort(arr,ind,low,pi-1);
        quickSort(arr,ind,pi+1,high);
    }
}
