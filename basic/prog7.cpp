#include <iostream>
using namespace std;

int main()
{
    int start , end , i = 1;
    bool print = true;
    cout << "Enter starting value : " ;
    cin >> start ;

    cout << "Enter ending value : ";
    cin >> end ;
    
    if(start > end)
        i = -1;

    cout << "Values are : ";
    while(print)
    {
        cout << start << " ";

        if (start==end) 
            print= false;
        
        start += i;
    }

    return 0;
}