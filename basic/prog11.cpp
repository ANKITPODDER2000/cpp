#include <iostream>
using namespace std;

int main()
{
    int *ptr_a;
    int a;
    cout << "Enter the value of a : ";
    cin >> a;
    ptr_a = &a;

    cout << "Ptr_a : " << ptr_a << "\n*Ptr_a : " << *ptr_a;
    return 0;
}