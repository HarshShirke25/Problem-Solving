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

Node* reverseByK(Node* head,int k)
{
	if( head==NULL )
	{
		cout<<"List is empty!"<<endl;
	}
	else
	{
		Node* next = NULL;
		Node* curr = head;
		Node* prev = NULL;
		int count = 0;
		while(curr!=NULL && count<k){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			count++;
		}
		if(next!=NULL)
		{
			head -> next = reverseByK(next,k);
		}
		
		return prev;
	}
}

int main()
{
	int ch;
	int data;
	while(1){
		cout<<"\n1:Print\n2:Create\n3:ReverseByK\n";
		cin>>ch;
		switch(ch){
			case 1:print();break;
			case 2:cout<<"Enter the data:";
					cin>>data;
					create(data);break;
			case 3:Node* p = reverseByK(head , 2);
					while(p!=NULL){
						cout<<p->data<<" ";
						p = p->next;
					};break;
			
	}
	}
	
}
