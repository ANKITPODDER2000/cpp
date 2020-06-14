#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[10];
    cout << "Enter 10 values : " ;
    for(int i=0;i<10;i++)
        cin >> arr[i];
    
    cout << "\n10 values are : " ;
    for(int i=0;i<10;i++)
        cout << arr[i] << " ";
    return 0;
}