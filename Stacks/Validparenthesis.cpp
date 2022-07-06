#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
	stack<char> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else
		{
			if(s[i] == ')'){
				char c = st.top();
				if(c=='('){
					st.pop();
				}else{
					return false;
				}
			}
			if(s[i] == '}'){
				char c = st.top();
				if(c=='{'){
					st.pop();
				}else{
					return false;
				}
			}
			if(s[i] == ']'){
				char c = st.top();
				if(c=='['){
					st.pop();
				}else{
					return false;
				}
			}
		}
	}
	if(!st.empty())
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	string s1 = "{[()]}";
	string s2 = "{[(}]}";
	bool val1 = isValid(s1);

	bool val2 = isValid(s2);
	
	if(val1){
		cout<<"Valid"<<endl;
	}else{
		cout<<"Not Valid"<<endl;
	}

	if(val2){
		cout<<"Valid"<<endl;
	}else{
		cout<<"Not Valid"<<endl;
	}
}
