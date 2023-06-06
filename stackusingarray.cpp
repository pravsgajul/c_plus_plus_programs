#include<iostream>
using namespace std;
#define n 4
class stack{
	int* arr;//Used int* as we have taken a variable length of array
	int top;
	
	public:
		//Coding the constructor
		stack(){
			arr = new int[n];//allocating new array of size n
			top=-1;
		}
		
		
	void push(int x){
		if (top==n-1){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		arr[top]=x;
	}

	void pop(){
		if(top==-1){
			cout<<"No elements to pop"<<endl;
			return;
		}
		top--;
	}
	
	int peak(){
		if(top==-1){
			cout<<"No elements in Stack"<<endl;
			return -1;
		}
		return arr[top];
	}

	bool empty(){
		/*if(top==-1){
			return true;
		}
		else{
			return false;
		}*/
		return top==-1;
	}
};

int main(){
	stack st;
	st.push(1);
	st.push(2);
	cout<<st.peak();
	cout<<st.empty();
	st.pop();
	cout<<st.peak();
	
}
