
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

struct node* top = NULL;

void push()
{
	struct node* temp;
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter the element to be pushed on the stack: ";
	cin>>data;
	temp->data = data;
	temp->next = NULL;
	
	if(top==NULL)
	{
		top = temp;
	}
	else{
		temp->next = top;
		top = temp;
	}
	
}

void pop()
{
	if(top == NULL)
	{
		cout<<"No elements in the stack to pop!\n";
	}else{
		
		struct node* k;
		k = top;
		top = top->next;
		k->next = NULL;
		free(k);
	}
}

void display()
{
	if(top == NULL)
	{
		cout<<"No elements to display\n";
	}else{
		struct node* p;
		p = top;
		while(p != NULL)
		{
			cout<<p->data<<"\n";
			p = p->next;
		}
	}
}

int main()
{
	int ch;
	
	while(1)
	{
		
		cout<<"1:Push\n2:Display\n3:Pop\n";
		cin>>ch;
	
		switch(ch)
		{
			case 1:push();break;
			case 2:display();break;
			case 3:pop();break;
		}
		
	}
	
	
	
	return 0;
	
}
