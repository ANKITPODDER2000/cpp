#include <iostream>
using namespace std;

int fib(int );

int main()
{
    int a;
    cout << "Enter the number to find out fib of that position : " ;
    cin >> a;
    cout << "Fib(" << a << ") is = " << fib(a);
    return 0;
}
int fib(int a)
{
    if(a==0 || a==1)
        return a;
    return fib(a-1) + fib(a-2);
}