//0-1 Knapsack using Recurssion
#include <iostream>
using namespace std;

void input(float *,int );
void output(float *,int );
float Knapsack(float *,float *,float ,int );

float *weight,*price,cap;
int n;

void input(float *arr,int n)
{
	for(int i=0;i<n;i++)
		cin >> arr[i];
}

void output(float *arr,int n)
{
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
}

float Knapsack(float *weight,float *price,float cap,int n)
{
	if(n==-1 || cap==0)
		return 0;//base case
	else if(weight[n]>cap)
		return Knapsack(weight,price,cap,n-1);
	else
		return price[n]+Knapsack(weight,price,cap-weight[n],n-1) > Knapsack(weight,price,cap,n-1) ? price[n]+Knapsack(weight,price,cap-weight[n],n-1) : Knapsack(weight,price,cap,n-1);
}

int main()
{
	cout << "Enter total no of Element : ";
	cin >> n;

	weight = new float[n];
	cout << "Enter weight of n elements : ";
	input(weight,n);

	price = new float[n];
	cout << "Enter price of n elements : ";
	input(price,n);

	cout << "Enter your capacity : ";
	cin >> cap;

	cout << "\nElements weight : ";
	output(weight,n);

	cout << "\nElements price : ";
	output(price,n);

	//Knapsack Calling
	float profit = Knapsack(weight,price,cap,n-1);
	cout << "\nProfit = " << profit << endl;

	return 0;
}

/*
//Complexity ->
	// time  -> o(2 ^ n)
	// Space -> o(1)
		
		F:\CPP\basic>g++ knapsackRec.cpp

		F:\CPP\basic>a
		Enter total no of Element : 3
		Enter weight of n elements : 10 20 30
		Enter price of n elements : 60 100 120
		Enter your capacity : 50

		Elements weight : 10 20 30
		Elements price : 60 100 120
		Profit = 220
*/