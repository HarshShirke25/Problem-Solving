//count of repeated characters in a string 
#include<bits/stdc++.h>
using namespace std;

void countRepeating(string s)
{
	map<char,int> count;
	for(int i = 0; i < s.length(); i++)
	{
		count[s[i]] = count[s[i]] + 1;
	}
	for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}

int main()
{
	string name = "harsh shirke";
	
	countRepeating(name);
	return 0;
}
