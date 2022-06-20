#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int bestTime(vector<int>& prices)
{
	int n = prices.size();
	int maxRight = prices[n-1];
	int maxProfit = 0;
	
	for(int i = n-2; i >= 0; i--)
	{
		maxRight = max(prices[i],maxRight);
		maxProfit = max(maxProfit, maxRight - prices[i]);
	}
	return maxProfit;
}

int main()
{
	int arr[] = {7,1,5,3,6,4};
	
	vector<int> v;
	v.push_back(7);
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(6);
	v.push_back(4);
	
	
	
	int maxProfit = bestTime(v);
	
	cout<<"Maximum Profit is "<<maxProfit;
}
