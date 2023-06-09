#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
	node(int val){
		data=val;
		next=this;//'this' is  a pointer
	}
};

void insertatHead(node* &head,int val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
		cout<<head->data;
	}
	node* i=head;
	if (head!=NULL){
		n->next=i;
		head=n;
		i->next=head;
		cout<<head->data;
	}
}

void displaylist(node* head){
	node* i=head;
	while(i->next!=NULL){
		cout<<i->data<<"->";
		i=i->next;
	}
	cout<<"NULL";
}

int main(){
	node* head=NULL;
	
	insertatHead(head,12);
	insertatHead(head,34);
	insertatHead(head,45);
	displaylist(head);
	
}
