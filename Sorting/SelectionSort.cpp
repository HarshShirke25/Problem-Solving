//Selection Sort
#include<iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
	
	
	for(int i = 0; i < size - 1; i++){
		
		int min = i;
		
		for(int j = i + 1; j < size; j++){
			
			if(arr[min]>arr[j]){
				min = j;
			}
			
		}
		
		swap(arr[min],arr[i]);
			
	}
	
	for(int i = 0; i < size ; i++){
		cout<<arr[i];
	}
}

int main()
{
	int arr[] = {2, 3, 4, 5, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selection_sort(arr,n);	
	
	return 0;
}
