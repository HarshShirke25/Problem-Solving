//factorial (Recursive)

#include<iostream>
using namespace std;

int factorial(int n)
{
	int ans;
	if(n==0)
	{
		return 1;
	}
	
	ans = n * factorial(n-1);
	
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int ans = factorial(n);
	cout<<"Factorial of number is: "<<ans;
	return 0;
}
