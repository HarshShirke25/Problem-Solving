#include<iostream>
using namespace std;

int rowSum(int a[][3],int row,int col)
{
	for(int row = 0; row<3; row++)
	{
		int sum = 0;
		for(int col=0; col<3; col++)
		{
			sum += a[row][col];
		}
		cout<<"Row wise Sum: "<<sum;
		cout<<endl;
	}
}

int colSum(int a[][3],int row,int col)
{
	for(int col = 0; col<3; col++)
	{
		int sum = 0;
		for(int row=0; row<3; row++)
		{
			sum += a[row][col];
		}
		cout<<"Col Wise Sum: "<<sum;
		cout<<endl;
	}
}

int main()
{
	int a[3][3];
	cout<<"Enter the numbers: ";
	for(int row = 0; row<3; row++)
	{
		for(int col=0; col<3; col++)
		{
			cin>>a[row][col];
		}
	}
	
	for(int row = 0; row<3; row++)
	{
		for(int col=0; col<3; col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<"Column wise printing"<<endl;
	for(int col = 0; col<3; col++)
	{
		for(int row=0; row<3; row++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	
	rowSum(a,3,3);
	cout<<endl;
	colSum(a,3,3);
	
	
	
	return 0;
}
