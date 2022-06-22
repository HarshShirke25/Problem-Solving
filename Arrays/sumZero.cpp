#include<bits/stdc++.h>
using namespace std;

bool sumZero(int arr[],int n)
{
    int sum = 0;
    map<int,bool> mp;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum==0 || mp.count(sum)==true)
        {
            return true;
        }
        else
        {
            mp[sum] = true;
        }
    }
    return false;
}


int main()
{
    int arr[] = {2,-2,3,-3};

    int n = sizeof(arr)/sizeof(arr[0]);

    if(sumZero(arr,n))
    {
        cout<<"Sum Zero is present"<<endl;
    }
    else
    {
        cout<<"Sum Zero is not present"<<endl;
    }

    return 0;
}