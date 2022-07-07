#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> v,int n)
{
	stack<int> st;
	st.push(-1);
	vector<int> ans(n);
	for(int i = 0; i < n; i++){
		int curr = v[i];
		while(curr <= st.top()){
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
	ans = prevSmaller(v,v.size());

	for(auto itr = ans.begin(); itr!=ans.end(); itr++){
		cout<<*itr<<" ";
	}
}
