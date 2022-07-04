#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

Node* head = NULL;

void print()
{
	
	if(head == NULL)
	{
		cout<<"No elements\n";
	}
	Node* temp = head;
	
	
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void create(int data)
{
	Node* temp = new Node(data);
	if(head == NULL){
		head = temp;
	}
	else{
		Node* p = head;
		while(p->next!=NULL){
			p = p->next;
			
		}
		p->next = temp;
	}
}

void sort012()
{
	if(head == NULL){
		cout<<"No elements\n";
	}
	else
	{
		int zerocount = 0;
		int onecount = 0;
		int twocount = 0;
		Node* temp = head;
		Node* temp1 = head;
		while(temp != NULL)
		{
			if(temp->data == 0)
			{
				zerocount++;
			}
			else if(temp->data==1)
			{
				onecount++;
			}
			else
			{
				twocount++;
			}
			temp = temp->next;
		}
		while(temp1!=NULL){
			if(zerocount){
				temp1->data = 0;
				zerocount--;
			}
			else if(onecount){
				temp1->data = 1;
				onecount--;
			}
			else{
				temp1->data = 2;
				twocount--;
			}
			temp1 = temp1->next;
		}
		print();
	}
}


int main()
{
	int ch;
	int data;
	while(1){
		cout<<"1:Print\n2:Create\n3:Sort012\n";
		cin>>ch;
		switch(ch){
			case 1:print();break;
			case 2:cout<<"Enter the data:";
					cin>>data;
					create(data);break;
			case 3:sort012();break;
			
			
	}
	}
	
}
