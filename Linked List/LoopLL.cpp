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

void createLoop()
{
	int loop;
	Node* temp1 = head;
	Node* temp2 = head;
	if(head == NULL)
	{
		cout<<"No elements"<<endl;
	}
	cout<<"Enter the position at which loop should be formed:";
	cin>>loop;
	for(int i=1;i<loop;i++)
	{
		temp1 = temp1->next;
	}
	
	while(temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;
}

void detectLoop()
{
	if(head == NULL)
	{
		cout<<"No elements"<<endl;
	}
	else
	{
		Node* slow = head;
		Node* fast = head;
		
		while(fast->next != NULL)
		{
			fast = fast->next;
			if(fast != NULL)
			{
				fast = fast->next;
			}
			slow = slow->next;
			if(slow==fast){
				cout<<"Loop present"<<endl;
				return;
			}
			
		}
		cout<<"Loop not present"<<endl;
		
	}
}

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
int main()
{
	int ch;
	int data;
	while(1){
		cout<<"1:Print\n2:Create\n3:Create Loop\n4:Detect Loop\n";
		cin>>ch;
		switch(ch){
			case 1:print();break;
			case 2:cout<<"Enter the data:";
					cin>>data;
					create(data);break;
			case 3:createLoop();break;
			case 4:detectLoop();break;
	}
	}
	
}
