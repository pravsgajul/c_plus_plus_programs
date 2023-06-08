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
