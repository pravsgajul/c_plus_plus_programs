#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	
	node(int val){
		data=val;
		next=NULL;
	}
};

void insertatHead(node* &head, int val){
	node* n=new node(val);
	n->next=head;
	head=n;
}

void insertatTail(node* &head, int val){
	node* n = new node(val);
	node* i=head;
	
	while(i->next!=NULL){
		i=i->next;
	}
	i->next=n;
}

void insertinbetween(node* &head,int aval,int bval, int cval){
	node* c = new node(cval);
	node* i=head;
	node* j=head;
	
	while(i->data!=aval){
		i=i->next;
	}
	while(j->data!=bval){
		j=j->next;
	}
	i->next=c;
	c->next=j;
	
}

void deletenode(node* head, int num){
	node* i=head;
	node* j=head;
	
	while(i->data!=num){
		i=i->next;
	}
	
	while(j->next!=i){
		j=j->next;
	}
	
	j->next=i->next;
	
	
}

void exchangenodes(node* &head,int aval,int bval){
	node* i=head;
	node* j=head;
	node* t=NULL;
	
	while(i->data!=aval){
		i=i->next;
	}
	while(j->data!=bval){
		j=j->next;
	}
	
	t=i->next;
	i->next=j->next;
	j->next=t;
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
	insertatHead(head,23);
	insertatHead(head,34);
	insertatTail(head,78);
	insertinbetween(head,34,23,56);
	displaylist(head);
	deletenode(head,56);
	exchangenodes(head,34,78);
	displaylist(head);
}
