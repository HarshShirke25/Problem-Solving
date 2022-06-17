#include<bits/stdc++.h>
using namespace std;

void getUnion(int a[],int m,int b[],int n)
{
	set<int> s;
	
	for(int i = 0; i< m; i++)
	{
		s.insert(a[i]);
	}
	
	for(int j = 0; j < n; j++)
	{
		s.insert(b[j]);
	}
	cout << "Number of elements after union operation: " << s.size() << endl;
    cout << "The union set of both arrays is :" << endl;
    
	for(auto itr = s.begin(); itr!=s.end(); itr++)
	{
		cout<<*itr<<" ";
	}
	
}

int main()
{
	int a[] = {1, 2, 5, 6, 2, 3, 5, 7, 3};
	int b[] = {2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
	
	getUnion(a,9,b,10);
	
	
	return 0;
}
