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
	node* n=new node(val);
	node* i=head;
	node* j=head;
	
	if(head==NULL){
		head=n;
		n->next=head;
		n->prev=head;
		i=head;
		j=head;
	}
	
	else{
		n->prev=head;
		n->next=head;
		head=n;
		i->prev=n;
		i->next=n;
	}
}

void displaylist(node* head){
	node* i=head;
	
}

int main(){
	node* head=NULL;
	insertintoHead(head,12);
	insertintoHead(head,23);
}
