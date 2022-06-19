#include<iostream>
using namespace std;

int leftmost(int arr[],int n,int key)
{
	int s = 0;
	int e = n - 1;
	
	int mid = s + (e-s)/2;
	int ans  = -1;
	
	while(s<=e)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			e = mid - 1;
		}
		else if(key > arr[mid])
		{
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}


int rightmost(int arr[],int n,int key)
{
	int s = 0;
	int e = n - 1;
	
	int mid = s + (e-s)/2;
	int ans  = -1;
	
	while(s<=e)
	{
		if(arr[mid] == key )
		{
			ans = mid;
			s = mid + 1;
		}
		else if(key > arr[mid])
		{
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int main()
{
	int arr[] = {1,2,3,3,5};
	int key = 3;
	
	int size = sizeof(arr)/sizeof(arr[0]);
	int left = leftmost(arr,size,key);
	int right = rightmost(arr,size,key);
	
	cout<<"Left most occurence of element is at index "<<left<<" and rightmost at "<<right;
}
