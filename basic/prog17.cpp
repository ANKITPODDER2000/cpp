#include <iostream>
#define NIL -1;
using namespace std;

int factorial(int );

int *fact;
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    fact = new int[a+1];
    for(int i=0;i<a+1;i++)
        fact[i] = NIL;
    cout << "Factorial of "<< a << " is : " << factorial(a) <<endl <<endl;
    cout << "Factorial :\n";
    for(int i=0;i<a+1;i++)
        cout << "Fact( " << i <<" ) = "<<fact[i] << endl;
    return 0;
}

int factorial(int a)
{
    if(a==1 || a==0)
    {
        fact[a] = 1;
        return 1;
    }
    else
    {
        fact[a] = a * factorial(a-1);
        return fact[a];
    }
}
//complexity : T(n) = T(n-1) + o(1)