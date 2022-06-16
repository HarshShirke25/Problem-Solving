//Bubble sort
#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
	for(int i = 0; i < size-1 ; i++){
		for(int j = i+1; j < size ;j++){
			if(arr[i] > arr[j]){
				
				swap(arr[i], arr[j]);
				
			}
		}
	}
	for(int i = 0; i < size ; i++){
		cout << arr[i];
	}
}

int main()
{
	int arr[] = {5,3,4,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr,n);
	return 0;
}
