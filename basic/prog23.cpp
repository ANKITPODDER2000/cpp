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
	int matrix[n+1][k+1],i,j;
	for(i=0;i<n+1;i++)
	{
		for(j=0; j<=i;j++)
		{
			if(j==0 || i==j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
		}
	}
	return matrix[n][k];
}