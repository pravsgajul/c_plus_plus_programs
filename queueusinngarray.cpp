#include<iostream>
#include<string.h>
using namespace std;
#define n 100

stringtochar(string x){
	
}

bool ascii(char x){
	
	int d = (int)x;
	if (49<=d && d<=57){
		return true;
	}
	else {
		return false;
	}
}

int asciii(char x){
	if(ascii(x)==true){
		return (int)x;
	}
}

class queue{
	int* arr;
	int front;
	int rear;
	
	public:
		queue(){
			arr=new int[n];
			front=-1;
			rear=-1;
		}
	
	void enqueue(char x){
		if(ascii(x)==1){
			if(front==-1 && rear==-1){
				front++;
				rear++;
				arr[front]=x;
				return;
			}
			
			if (rear==n-1){
				cout<<"Queue is full"<<endl;
				return;
			}
			
			rear++;
			arr[rear]=x;
		}
		else{
			return;
		}
		
	}
	
	void dequeue(){
		if(rear==-1){
			cout<<"Queue if Empty"<<endl;
			return;
		}
		
		if(rear==0 && front==0){
			front--;
			rear--;
			return;
		}
		
		rear--;
	}
	
	int peak(){
		if(front==-1){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		return arr[front];
	}
	
	bool isempty(){
		return front==-1;
	}
	
	void display(){
		for(int i=0;i<=rear;i++){
			cout<<arr[i]<<endl;
		}
	}
	
	void print(){
		cout<<"Front:"<<front<<endl;
		cout<<"Rear:"<<rear<<endl;
	}
};

int main(){
	queue q;
	string c;
	
	do{
		cout<<"Enter the option:"<<endl;
		
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Peak"<<endl;
		cout<<"5. IsEmpty"<<endl;
		cout<<"6. Print"<<endl;
		cout<<"7. Exit"<<endl;
		
		cin>>c;
		
		if(ascii (c)){
			switch(asciii(c)){
				case 49: 
					cout<<"Enter the number:"<<endl;
					int m;
					cin>>m;
					q.enqueue(m);
					break;
			
				case 50:
					q.dequeue();
					break;
				
				case 51:
					q.display();
					break;
					
				case 52:
					q.peak();
					break;
				
				case 53:
					cout<<q.isempty();
					break;
					
				case 54:
					q.print();
					break;
			
				default:
					break;
			}
		}
		else{
			cout<<"Incorrect Input"<<endl;
			if(ascii(c)==false){
				
			}
		}
	}while(48<asciii(c)!=55);
	return 0;
}
