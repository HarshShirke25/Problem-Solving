#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
	int data;
	struct node* prev;
	struct node* next;
};
struct node* head = NULL;

void insert_begin()
{
		
	struct node* temp;
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter the data: ";
	cin>>data;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head->prev = temp;
		head = head->prev;
	}
			
}


void print_list()
{
	struct node* p;
	p = head;
	if(p == NULL)
	{
		cout<<"List is Empty!"<<endl;
	}
	else
	{
		while(p != NULL)
		{
			cout<<p->data<<" ";
			p = p->next;
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		cout<<"\nOperations on Doubly Linked List"<<endl;
		cout<<"1:Insert at Begin\n2:Insert at Middle\n3:Insert at End\n4:Print the List\n"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				insert_begin();break;
//			case 2:
//				insert_middle();break;
//			case 3:
//				insert_end();break;
			case 4:
				print_list();break;
			
		}
	}
	
	return 0;
}
