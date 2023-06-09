#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* parent;
		node* lchild;
		node* rchild;
		
	node(int val){
		data=val;
		parent=NULL;
		lchild=NULL;
		rchild=NULL;
	}
};

void insertintoTree(node* &root,int pval,int newval){
	node* n=new node(newval);
	node* i=root;
	if (root==NULL){
		root=n;
		i=root;
	}
	else{
		while(i->value!=pval)
	}	
}

void displaytreebfs(node* root){
	node* i=root;
}

void displaytreedfs(node* root){
	node* i=root;
}
int main(){
	node* root=NULL;
	void
	
}
