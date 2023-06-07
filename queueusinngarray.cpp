#include<iostream>
using namespace std;
#define n 100

class queue{
	int* arr;
	int front;
	int rear;
	
	public:
		queue(){
			arr=new char[n];
			front=-1;
			rear=-1;
		}
	
	void enqueue(char x){
		if(front==-1 && rear==-1){
			front++;
			rear++;
			arr[front]=x;
		}
		
		if (rear==n-1){
			cout<<"Queue is full"<<endl;
		}
		
		rear++;
		arr[rear]=x;
	}
	
	void dequeue(){
		if(rear==-1){
			cout<<"Queue if Empty"<<endl;
		}
	}
	
	void display(){
		
	}
};
