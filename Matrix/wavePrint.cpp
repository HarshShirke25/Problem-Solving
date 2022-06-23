#include<iostream>
using namespace std;

void wavePrint(int a[][3],int row,int col)
{
	for(int c = 0; c<col; c++)
	{
		if(c&1)
		{
			for(int r=row-1;r>=0;r--)
			{
				cout<<a[r][c]<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int r=0; r<row; r++)
			{
				cout<<a[r][c]<<" ";
			}
			cout<<endl;
		}
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
	cout<<endl;
	
	cout<<"Wave Format Printing"<<endl;
	wavePrint(a,3,3);
	
	cout<<endl;
	return 0;
	
}
