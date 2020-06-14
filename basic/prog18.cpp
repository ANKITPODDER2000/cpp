#include <iostream>
using namespace std;

int* fib(int );

int main()
{
    int a;
    cout << "Enter the number to find out fib of that position : " ;
    cin >> a;
    int *fibo = fib(a);
    cout << "Series is : ";
    for(int i=0;i<a;i++)
        cout << fibo[i] << " ";
    return 0;
}
int* fib(int a)
{
    int *fibo = new int[a];
    if (a==1)
        return 0;
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<a;i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
    return fibo;
}