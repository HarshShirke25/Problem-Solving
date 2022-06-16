//Insertion sort
#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
	
	for(int i = 1 ; i < size ; i++){
		int key = arr[i];
		int j = i-1;
		while(j >= 0){
			if(arr[j] > key){
				arr[j+1] = arr[j];
			
			}
			else{
				break;
			}
			j--;
		}
		arr[j+1] = key;
	}
	
	for(int i = 0; i < size ; i++){
		cout<<arr[i];
	}
}

int main()
{
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertion_sort(arr,n);
	
	return 0;
	
}
