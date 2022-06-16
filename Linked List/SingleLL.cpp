#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;


void find_kth_end(int k)
{
	struct node* ptemp, *kthNode;
	ptemp = head;
	kthNode = head;
//	while(ptemp != NULL){
//		ptemp = ptemp->next;
//		count++;
//		if(count > k){
//			kthNode = kthNode->next;
//		}
//	}
//	cout<<kthNode->data<<endl;
	
	for(int i= 0; i< k-1; i++){
		ptemp = ptemp->next;
	}
	
	while(ptemp->next != NULL){
		ptemp = ptemp->next;
		kthNode = kthNode->next;
	}
	cout<<kthNode->data<<endl;
	
}


void insert_begin()
{
	struct node* temp;
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter the Data"<<endl;
	cin>>data;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}else{
		temp->next = head;
		head = temp;
	}
	
}

void insert_middle()
{
	struct node* temp;
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter the Data"<<endl;
	cin>>data;
	temp->data = data;
	temp->next = NULL;
	
	if(head == NULL){
		head = temp;
	}else{
		int pos;
		struct node* p;
		p = head;
		cout<<"Enter the position:"<<endl;
		cin>>pos;
		for(int i = 2; i<pos; i++){
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
	
}

void insert_end()
{
	struct node* temp;
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter the Data"<<endl;
	cin>>data;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}else{
		struct node* p;
		p = head;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = temp;
	}
	
}

void delete_first()
{
	if(head == NULL)
	{
		cout<<"List is empty!"<<endl;
	}
	else
	{
		struct node* p;
		p = head;
		head = head->next;
		p->next = NULL;
		free(p);
	}
}

void delete_middle()
{
	if(head == NULL)
	{
		cout<<"List is Empty!"<<endl;
	}
	else
	{
		struct node* temp, *del;
		temp = head;
		int pos;
		cout<<"Enter the position of node to be deleted: ";
		cin>>pos;
		if(pos==1)
		{
			struct node* p;
			p = head;
			head = head->next;
			p->next = NULL;
			free(p);
		}
		else{
			
			for(int i = 2; i < pos; i++)
			{
				temp = temp->next;
			}
			del = temp->next;
			temp->next = temp->next->next;
			del->next = NULL;
			free(del);
		}	
	}
}

void delete_last()
{
	if(head == NULL)
	{
		cout<<"List is Empty!"<<endl;
	}
	else
	{
		struct node* p,*q;
		p = head;
		while(p->next->next != NULL){
			p = p->next;
		}
		q = p->next;
		p->next = NULL;
		free(q);		
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
	int ch,k;
	struct node* ansNode;
	while(1)
	{
		
	cout<<"\nChoose the operations:\n1:Insert at Beginning\n2:Insert at Middle\n3:Insert at End\n4:Print the List\n5:Find kth end node\n6:Delete First\n7:Delete Middle\n8:Delete Last\n"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			insert_begin();
			break;
		case 2:
			insert_middle();
			break;
		case 3:
			insert_end();
			break;
			
		case 4:
			print_list();
			break;
			
		case 5:
			cout<<"Enter the value of k: "<<endl;
			cin>>k;
			find_kth_end(k);
			cout<<"The value of kth end node is: "<<ansNode->data<<endl;
			break;
		case 6:
			delete_first();
			break;
		case 7:
			delete_middle();
			break;
		case 8:
			delete_last();
			break;
			
		
	}		
	}	
}


