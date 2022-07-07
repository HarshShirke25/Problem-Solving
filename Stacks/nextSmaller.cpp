#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int> v,int n)
{
	stack<int> st;
	st.push(-1);
	vector<int> ans(n);
	for(int i = n-1; i >= 0; i--){
		int curr = v[i];
		while(st.top() >= curr){
			st.pop();
		}
		ans[i] = st.top(); 
		st.push(curr);
	}
	
	return ans;
}

int main()
{
	
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	vector<int> ans;
	ans = nextSmaller(v,v.size());

	for(auto itr = ans.begin(); itr!=ans.end(); itr++){
		cout<<*itr<<" ";
	}
}
