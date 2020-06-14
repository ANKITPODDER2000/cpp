#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    cout << "Even no. : ";
    for (i=a;i<=b;i++){
        if (!(i%2))
            cout << i << " ";
    }

    return 0;
}