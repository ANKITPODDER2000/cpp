//Minimum operation for String
#include <iostream>
using namespace std;

int minmimun(int ,int ,int );
int minopt(string,string);

int main()
{
	string str1,str2;

	cout << "Enter the String1 : " ;
	cin >> str1;
	cout << "Enter the String2 : " ;
	cin >> str2;

	int minop = minopt(str1,str2);
	cout << "To conver str1 into str2 we need : " << minop << endl;
	return 0;
}
int minopt(string str1,string str2)
{
	int m = str1.length(),n = str2.length();
	int matrix[m+1][n+1];
	for(int i=0;i<m+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(i==0)
				matrix[i][j] = j;
			else if(j==0)
				matrix[i][j] = i;
			else if(str1[i-1]==str2[j-1])
				matrix[i][j] = matrix[i-1][j-1];
			else
				matrix[i][j] = 1 + minmimun(matrix[i-1][j-1],matrix[i-1][j],matrix[i][j-1]);
		}
	}
	return matrix[m][n];
}
int minmimun(int a,int b,int c)
{
	if(a<b && a<c)
		return a;
	else if(b<c)
		return b;
	else
		return c;
}