#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* prev;
		node* next;
		
	node(int val){
		data=val;
		prev=NULL;
		next=NULL;
	}
};

void insertatHead(node* &head,int val){
	if (head==NULL){
		node* n=new node(val);
		head=n;
	}
	else{
		node* n=new node(val);
		head->prev=n;
		n->next=head;
		head=n;
	}
}

void insertatTail(node* &head,int val){
	node* i=head;
	node* n= new node(val);
	while(i->next!=NULL){
		i=i->next;
	}
	n->prev=i;
	i->next=n;
}


void displaylist(node* head){
	node* i=head;
	while(i!=NULL){
		cout<<i->data<<"->";
		i=i->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head=NULL;
	insertatHead(head,32);
	insertatHead(head,48);
	insertatTail(head,12);
	displaylist(head);
}
