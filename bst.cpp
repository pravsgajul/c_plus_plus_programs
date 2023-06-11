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
		while(i->data!=pval){
			try{
				if(i->lchild!=NULL){
					i=i->lchild;
				}
				else if(i->rchild!=NULL){
					i=i->rchild;
				}
			}
			catch(...){
				cout<<"Exception";
				return; 
			}
		}
		n->parent=i;
	}
	cout<<i->data;
}

void displaytreebfs(node* root){
	node* i=root;
}

void displaytreedfs(node* root){
	node* i=root;
	
	while(i->lchild!=NULL){
		cout<<i->data;
		i=i->lchild;
	}
}
int main(){
	node* root=NULL;
	insertintoTree(root,NULL,12);
	insertintoTree(root,12,34);
	insertintoTree(root,12,45);
	insertintoTree(root,12,33);
}
