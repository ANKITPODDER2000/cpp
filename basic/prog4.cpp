#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout << "Enter 1st no : ";
    cin >> num1;
    cout << "Enter 2nd no : ";
    cin >> num2; // >> -> extraction operator
    
    cout << "Sum of " << num1 <<" & "<< num2 <<" is : " << num1 + num2 << endl;
    cout << "Sub of " << num1 <<" & "<< num2 <<" is : " << num1 - num2 << endl;
    cout << "Mul of " << num1 <<" & "<< num2 <<" is : " << num1 * num2 << endl;
    cout << "Div of " << num1 <<" & "<< num2 <<" is : " << num1 / num2 << endl;
    cout << "Float div of " << num1 <<" & "<< num2 <<" is : " << (float)num1 / num2 << endl;
    cout << "Mod of " << num1 <<" & "<< num2 <<" is : " << num1 % num2 << endl;

    cout << num1++ << endl;
    cout << ++num1 << endl;

    cout << num1-- << endl;
    cout << --num1 << endl;

    return 0;
}