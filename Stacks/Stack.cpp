#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		int *arr;
		int top;
		int size;
		
		Stack(int s)
		{
			this->size = s;
			top = -1;
			arr = new int[size];
		}
		
		void push(int data)
		{
			if(size-top>1){
				top++;
				arr[top] = data;
			}else{
				cout<<"Overflow\n"<<endl;
			}
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack Underflow"<<endl;
			}
			else
			{
				top--;
			}
		}
		
		void peek()
		{
			if(top==-1)
			{
				cout<<"Stack Underflow"<<endl;
			}
			else
			{
				cout<<arr[top]<<endl; 
			}
		}
		
};


int main()
{
	Stack s(5);
	
	s.push(10);
	s.push(20);
	s.push(30);
	// Stack 10 20 30
	
	s.pop();
	
	//Stack 10 20
	
	s.peek();
	
	//20 on Top
	
	return 0;
}
