#include<iostream>
using namespace std;

void reverse_array(int arr[],int start,int end,int size)
{
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	reverse_array(arr,0,size-1,size);
	return 0;
}
