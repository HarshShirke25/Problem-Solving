#include<iostream>
using namespace std;

int swap_alternate(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
	
	while(start<=end){
		swap(arr[start],arr[start+1]);
		if(start != end-1){
			swap(arr[end],arr[end-1]);
		}
		start = start+2;
		end = end-2;
	}	
}

void printArray(int arr[],int size)
{
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[8] = {1, 2, 3, 4, 5, 6,7,8};
	int size = sizeof(arr)/sizeof(arr[0]);	
	swap_alternate(arr,size);
	printArray(arr,size);
}
