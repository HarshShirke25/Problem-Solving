#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
	for(int i = 0; i < n ; i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int key;
	int arr[] = {1,2,34,32,45};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Enter the key: ";
	cin >> key;
	
	int index = linearSearch(arr,n,key);
	if(index != -1)
     {
        cout<<"Key is found at index: "<<index<<endl;
     }
     else
     {
        cout<<"Key not found"<<endl;
     }
}
