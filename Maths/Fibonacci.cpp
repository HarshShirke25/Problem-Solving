#include<iostream>
using namespace std;

int fibonacci(int n)
{
	int ans;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	ans = fibonacci(n-1) + fibonacci(n-2);
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int ans = fibonacci(n);
	cout<<"Ans: "<<ans;
	return 0;
}
