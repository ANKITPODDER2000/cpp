#include <iostream>
using namespace std;

int fib(int );
int *fibo;
int main()
{
    int a,f;
    cout << "Enter the number to find out fib of that position : " ;
    cin >> a;
    fibo = new int[a+1];
    for(int i=0;i<a+1;i++)
        fibo[i] = -1;
    f = fib(a);
    cout << "Fib(" << a << ") is = " << f;
    return 0;
}
int fib(int a)
{
    if(fibo[a]!=-1)
    {
        cout << a << endl;
        return fibo[a];
    }
    else if(a==0 || a==1)
        return a;
    else{
        fibo[a] =  fib(a-1) + fib(a-2);
        return fibo[a];
    }
}