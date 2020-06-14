#include <iostream>
using namespace std;

int main()
{
    int num,a,max,min;
    int i = 1;
    cout << "Enter total no of digit : " ;
    cin >> num;

    while (i<=num){
        cout << "Enter the "<< i << " number : ";
        cin >> a;

        if (i==1)
            max = min = a;
        else{
            if(max<a)
                max = a;
            if (min > a)
                min = a;
        }

        i++;
    }
    
    cout << "Max is : " << max <<endl;
    cout << "Min is : " << min <<endl;

    return 0;
}