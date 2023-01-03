#include<iostream>
using namespace std;

void factorial(int n){
	int fact=1;
	for(int i=n;i>=1;i--){
		fact=fact*i;
	}
	cout<<fact;
}
int main(){
	int num;
	cin>>num;
	factorial(num);
}
