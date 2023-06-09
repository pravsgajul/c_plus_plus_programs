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
	if(head==NULL){
		head=n;
		n->next=head;
		n->prev=head;
	}
}

int main(){
	node* head=NULL;
	insertintoHead(head,12);
}
