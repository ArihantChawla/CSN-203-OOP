#include<iostream>
using namespace std;
void hmm(char name[], int rt=90)
{
    cout << "The name of the movie is " << name << "\nThe running time is " << rt << " minutes.\n" << endl;
}
int main()
{
    char name[20];
    int rt;
    cout << "Enter the name of the movie" << endl;
    scanf("%[^\n]",name);
    cout << "Function call with default argument:" << endl;
    hmm(name);
    cout << "Enter the runnning time of the movie in minutes" << endl;
    cin >> rt;
    cout << "Funtion call with custom argument:" << endl;
    hmm(name, rt);

}
