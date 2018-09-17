#include<iostream>
using namespace std;
int top=50;
void push(char stack[],char key);
char pop(char stack[]);
char display(char stack[]);
void push(double stack[],double key);
double pop(double stack[]);
double display(double stack[]);
void push(int stack[],int key);
int pop(int stack[]);
int display(int stack[]);
int main()
{
    int stack_int[5];
    char stack_char[5];
    double stack_double[5];
    int n;
    while(1)
    {
        cout << "\n--------------------------------\nPress:\n0.To Exit\n1. For Character Stack\n2. For Integer Stack\n3. For Double Stack"<< endl;
        cin >> n;
        cout << "\n--------------------------------\n";
        switch (n)
        {
            case 0:
                return 0;
            case 1:             //character
                push(stack_char,'a');
                cout << pop(stack_char) << endl;
                push(stack_char,'b');
                push(stack_char,'c');
                cout << pop(stack_char) << endl;
                cout << pop(stack_char) << endl;
                break;
            case 2:
                push(stack_int,1);
                cout << pop(stack_int) << endl;
                push(stack_int,2);
                push(stack_int,3);
                cout << pop(stack_int) << endl;
                cout << pop(stack_int) << endl;
                break;
            case 3:
                push(stack_double,1.3);
                cout << pop(stack_double) << endl;
                push(stack_double,2.1);
                push(stack_double,3.4);
                cout << pop(stack_double) << endl;
                cout << pop(stack_double) << endl;
                break;
            default:
                cout << "Invalid Input\n";
        }
    }
    return 0;
}

void push(char stack[],char key)
{
    if(top<-1)
    {
        cout << "STACK OVERFLOW" << endl;
        return;
    }
    else
    {
        top--;
        stack[top]=key;
    }
    return;
}
char pop(char stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top++];
    }
}
char display(char stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top];
    }
}
void push(double stack[],double key)
{
    if(top<-1)
    {
        cout << "STACK OVERFLOW" << endl;
        return;
    }
    else
    {
        top--;
        stack[top]=key;
    }
    return;
}
double pop(double stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top++];
    }
}
double display(double stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top];
    }
}
void push(int stack[],int key)
{
    if(top<-1)
    {
        cout << "STACK OVERFLOW" << endl;
        return;
    }
    else
    {
        top--;
        stack[top]=key;
    }
    return;
}
int pop(int stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top++];
    }
}
int display(int stack[])
{
    if(top==50)
    {
        cout << "STACK EMPTY" << endl;
        return 0;
    }
    else
    {
        return stack[top];
    }
}
