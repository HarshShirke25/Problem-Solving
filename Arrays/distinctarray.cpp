#include<iostream>
using namespace std;

int main()
{
	int arr[] = {2, 3, 4, 5, 6, 1, 2, 3, 4};
	int i,j;
	
	for(i = 0; i < 9; i++){
		
		for(j = 0 ; j<i ; j++){
			
			if(arr[i] == arr[j]){
				break;
			}
			
		}
		if (i==j){
			cout << arr[i];
		}
	}
	return 0;
}
