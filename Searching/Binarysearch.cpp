#include<iostream>
using namespace std;

int binSearch(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            return mid;
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
    return -1;
}

int main()
{
	 int key;
     int arr[] = {1,2,12,23,45,56};
     
     int size = sizeof(arr)/sizeof(arr[0]);

     cout<<"enter the element to search: ";
     cin>>key;

     int index = binSearch(arr,size,key);

     if(index != -1)
     {
        cout<<"Key is found at index: "<<index<<endl;
     }
     else
     {
        cout<<"Key not found"<<endl;
     }
}
