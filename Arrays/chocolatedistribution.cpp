#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int chocDist(int arr[],int n,int s)
{
	sort(arr,arr+n);
	int i = 0;
	int j = s-1;
	
	int d = INT_MAX;
	while(j<n)
	{
		d = min(d,arr[j]-arr[i]);
		i++;
		j++;
	}
	return d;
}

int main()
{
	int arr[] = {3,4,1,9,56,7,9,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	int s = 5;
	int ans = chocDist(arr,n,s);
	
	cout<<"Ans is "<<ans;
	
	return 0;
}
