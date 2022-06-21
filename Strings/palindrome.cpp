#include<string.h>
#include<iostream>
using namespace std;
char toLowerCase(char c)
{
	if ((c>='a'&&c<='z')||(c>='0'&&c<='9'))
	{
		return c;
	}
	else
	{
		char temp = c - 'A' + 'a';
		return temp;
	}
}

bool checkPalindrome(string str)
{
	int s = 0;
	int e = str.length()-1;
	
	while(s<=e)
	{
		if(toLowerCase(str[s])!=toLowerCase(str[e]))
		{
			return 0;
			
		}
		else
		{
			s++;
			e--;
		}
		
	}
	return 1;
}


int main()
{
	string s;
	cout<<"Enter your name: ";
	getline(cin,s);
	
	if(checkPalindrome(s))
	{
		cout<<"It is a palindrome";
	}
	else{
		cout<<"Not a palindrome";
	}
	
	return 0;
}
