#include<iostream>
using namespace std;

void kadane(int a[],int n)
{
    int max_so_far = a[0];
    int max_ending = 0;
    int start = 0;
    int end = 0;
    int s = 0;

    for(int i = 0; i < n; i++)
    {
        max_ending = max_ending + a[i];
        if(max_so_far < max_ending)
        {
            max_so_far = max_ending;
            start = s;
            end = i;
        }
        if(max_ending < 0)
        {
            max_ending = 0;
            s = i + 1;
        }
    }
    cout<<"Max sum of contiguous subarray: "<<max_so_far<<endl;
    cout<<"Index of subarray is from "<<start<<" to "<<end<<endl;
}

int main()
{
    int arr[] = {4,-3,-2,2,3,1,-2,-3,4,2,-6,-3,-1,3,1,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    kadane(arr,n);

    return 0;
}