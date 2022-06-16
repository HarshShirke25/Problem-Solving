#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int arr1[4] = {9,9,9,9};
	int arr2[4] = {3,3,3,3};
	int arr3[10];
	int dig = 0;
	int num1 = 0,num2 = 0,sum = 0;
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	int s2 = sizeof(arr2)/sizeof(arr2[0]);
	
	
	
	for(int i = 0; i<s1 ; i++){
		num1 = (num1*10)+arr1[i];
	}
	
	for(int i = 0; i<s2 ; i++){
		num2 = (num2*10)+arr2[i];
	}
	
	sum = num1 + num2;
	cout<<sum<<endl;
	
	for(int i =0; i<max(s1,s2);i++){
		dig = sum % 10;
		arr3[s1 - i - 1] = dig;
		sum = sum / 10; 
	}
	
	cout<<arr3[0];
	cout<<arr3[1];
	cout<<arr3[2];
	cout<<arr3[3];
	
	
	
}
