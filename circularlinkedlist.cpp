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
	node* i=head;
	node* j= head;
	
	if(head==NULL){
		head=n;
		cout<<"head" <<head->data;
	}
	cout<<j->data;
	/*while(j->next!=i){
		cout<<"inside loop";
		j=j->next;
		n->next=i;
		head=n;
		cout<<head->data;
	}
	j->next=n;*/
}

void insertbetween(node* head,int val1,int val2, int newval){
	node* n= new node(newval);
}

void displaylist(node* head){
	node* i=head;
	while(i->next!=i){
		cout<<i->data<<"->";
		i=i->next;
	}
	
}

int main(){
	node* head=NULL;
	
	insertatHead(head,12);
	insertatHead(head,34);
	insertatHead(head,45);
	insertatHead(head,233);
	insertatHead(head,78);
	insertatHead(head,66);
	insertatHead(head,97);
	insertatHead(head,90);
	insertatHead(head,22);

	displaylist(head);
	
}
