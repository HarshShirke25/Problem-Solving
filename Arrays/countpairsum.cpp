#include<iostream>
#include <unordered_map>
using namespace std;

int countpairsum(int arr[],int n,int k)
{
	unordered_map<int,int> m;
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		int b = k - arr[i];
		if(m[b]){
			ans+=m[b];
		}
		m[arr[i]]++;
	}
	return ans;
}


int main()
{
	int arr[] = {1, 5, 7, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k = 6;
	
	int cnt = countpairsum(arr,size,k);
	cout<<"Count is "<<cnt;
	return 0;
}
