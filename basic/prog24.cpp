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
	int matrix[k+1],i,j;
	for(i=0;i<k+1;i++)
		matrix[i] = 0;
	matrix[0] = 1;
	for(i=1;i<n+1;i++)
	{
		for(j=i; j>0;j--)
		{
			matrix[j] += matrix[j-1];
		}
		cout << "";
	}
	return matrix[k];
}