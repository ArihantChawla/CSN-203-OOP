#include<iostream>
using namespace std;
int top=50;
void push(char stack[],char key);
void push(double stack[],double key);
void push(int stack[],int key);
char pop(char stack[]);
char pop(double stack[]);
char pop(int stack[]);
char display(char stack[]);
char display(double stack[]);
char display(int stack[]);
int main()
{
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
        return;
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
        return;
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
        return;
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
        return;
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
        return;
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
        return;
    }
    else
    {
        return stack[top];
    }
}
