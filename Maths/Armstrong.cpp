#include <iostream>
using namespace std;

int armstrong(int n)
{
	int temp = n;
	int p = 0;
	
	
	while (n > 0) {

			int rem = n % 10;
			p = (p) + (rem * rem * rem);
			n = n / 10;
		}

		
		if (temp == p) {
			cout<<("It is an Armstrong Number.");
		}
		else {
			cout<<("It is not an Armstrong Number.");
		}
	
	
}

int main() {
	int n;
	cin>>n;
	armstrong(n);
				
	return 0;
}


