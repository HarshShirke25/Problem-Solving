#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
	stack<char> st;
	string ans = "";
	if(s==""){
		cout<<"empty"<<endl;
	}else{
		for(int i = 0;i<s.length();i++)
		{
			char ch = s[i];
			st.push(ch);
		}
		
		for(int i = 0;i<s.length();i++)
		{
			char c = st.top();
			ans.push_back(c);
			st.pop();
		}
		cout<<ans;
		
	}
}

int main()
{
	string s = "harsh";
	reverse(s);
}
