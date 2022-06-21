#include<iostream>
#include<math.h>
using namespace std;

int trapWater(int arr[],int n)
{
	int left[n];
	int right[n];
	left[0] = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		left[i] = max(left[i-1],arr[i]);
	}
	right[n-1] = arr[n-1];
	for(int i = n-2; i>=0; i--)
	{
		right[i] = max(right[i+1],arr[i]);
	}
	
	int ans = 0;
	for(int i = 0; i<n; i++)
	{
		 ans += min(left[i],right[i]) - arr[i];
	}
	return ans;
}

int main()
{
	int arr[] = {3, 0, 2, 0, 4};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int ans = trapWater(arr,size);
	cout<<"Trapped Rainwater units are: "<<ans;
	return 0;
}
