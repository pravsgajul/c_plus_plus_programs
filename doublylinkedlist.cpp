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

void insertinbetween(node* &head,int index1,int index2,int newval){
	node* i=head;
	node* j=head;
	
	node* c=new node(newval); 
	
	for(int a=0;a<index1;a++){
		i=i->next;
	}
	for(int b=0;b<index2;b++){
		j=j->next;
	}
	
	i->next=c;
	c->prev=i;
	c->next=j;
	j->prev=c;
}

void deletenode(node* head,int num){
	node* i = head;
	node* p = head;
	node* n = head;
	
	cout<<"Bef W";
	while(i->data!=num){
		i=i->next;
	}
	
	while(p->next!=i->prev){
		p=p->next;
		cout<<p;
	}
	
	while(n->prev!=i){
		n=n->next;
	}
	
	cout<<i->data<<endl;
	cout<<p->data<<endl;
	cout<<n->data<<endl;
	cout<< " Af W";
	//cout<< i->
	/*p=(node*)i->prev;
	cout<<p->data;
	n=(node*)i->next;
	cout<<n->data;
	cout<<"AAA"<<endl;*/
	(i->prev)->next=i->next;
	cout<<"AA"<<endl;
//	(i.next).prev=i->prev;
//	p->next= (node*) i->next;
//	cout<<"AA"<<endl;
	//n->prev=i->prev;
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
	insertinbetween(head,1,2,33);
	deletenode(head,48);
	displaylist(head);
}
