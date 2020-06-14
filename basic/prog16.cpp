#include <iostream>
using namespace std;

int fact(int );

int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    cout << "Factorial of "<< a << " is : " << fact(a);
    return 0;
}

int fact(int a)
{
    if(a==1 || a==0) //base case
        return 1;
    else
        return a * fact(a-1);
}
//complexity : T(n) = T(n-1) + o(1)