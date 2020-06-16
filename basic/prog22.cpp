#include <iostream>
using namespace std;
int coef(int ,int );

int main()
{
	int n,k;
	cout << "Enter value of n & k = " ;
	cin >> n >> k;
	cout << "C(n,k) is : " << coef(n,k);
	return 0;
}
int coef(int n,int k)
{
	if(n==k || k==0)
		return 1;
	else
		return coef(n-1,k-1) + coef(n-1,k);
}