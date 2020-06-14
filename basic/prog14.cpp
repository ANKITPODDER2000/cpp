#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter total no of array element : " ;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter "<< n  <<" values : " ;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    cout << "\n"<< n << " values are : " ;
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}