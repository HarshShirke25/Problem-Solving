//Two pointer approach
#include<iostream>
using namespace std;

void shiftall(int arr[],int l,int r)
{
	
	while(l <= r)
	{
		if(arr[l]<0 && arr[r]<0)
		{
			l++;
		}
		else if(arr[l]>0 && arr[r]<0)
		{
			int temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
		}
		else if(arr[l]>0 && arr[r]>0)
		{
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}

	
}

int main()
{
	int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	shiftall(arr,0,n);
	
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
