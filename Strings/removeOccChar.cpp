
#include <algorithm>
#include <iostream>
using namespace std;


string removeCharacters(string S, char c)
{

	S.erase(remove(
				S.begin(), S.end(), c),
			S.end());

	return S;
}

int main()
{

	string S = "GFG is Fun";
	char C = 'F';
	cout << "String Before: " << S << endl;

	
	S = removeCharacters(S, C);

	cout << "String After: " << S << endl;
	return 0;
}

