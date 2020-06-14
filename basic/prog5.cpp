#include <iostream>
using namespace std;

int main()
{
    int a,b,c,max;
    cout << "Enter value of a,b & c : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;
    
    cout << "Max is : " << max << endl;
    return 0;
}