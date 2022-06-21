#include<iostream>
#include<string.h>

using namespace std;



void reverse(string& str)
{
	int s = 0;
	int e = str.length()-1;
	
	while(s<e)
	{
		swap(str[s],str[e]);
		s++;
		e--;
	}
	cout<<str;
}

int main()
{
	string str;
	cout<<"Enter the string: ";
	getline(cin,str);
	cout<<str;
	reverse(str);
	
	
	return 0;
}
