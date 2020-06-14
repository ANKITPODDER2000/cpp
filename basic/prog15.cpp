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
    int factorial = 1;
    for(int i=1;i<=a;i++)
        factorial *= i;
    return factorial;
}