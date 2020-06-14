#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    int an = 10;
    *a = 100;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "=============================\n\n";

    a = &an;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "=============================\n\n";

    *a = 50;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "=============================\n\n";

    cout << "&an = " << &an << endl;
    cout << "an = " << an << endl;
    cout << "=============================\n\n";

    delete a;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    return 0;
}