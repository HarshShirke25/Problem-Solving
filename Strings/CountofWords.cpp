#include <bits/stdc++.h>
using namespace std;


void printFrequency(string str)
{
	map<string, int> M;


	string word = "";

	for (int i = 0; i < str.size(); i++) {

		
		if (str[i] == ' ') {

			
			if (M.find(word) == M.end()) {
				M.insert(make_pair(word, 1));
				word = "";
			}

			
			else {
				M[word]++;
				word = "";
			}
		}

		else
			word += str[i];
	}

	
	if (M.find(word) == M.end())
		M.insert(make_pair(word, 1));

	
	else
		M[word]++;

	
	for (auto& it : M) {
		cout << it.first << " - "
			<< it.second
			<< endl;
	}
}


int main()
{
	string str = "it is what it is";

	printFrequency(str);
	return 0;
}

