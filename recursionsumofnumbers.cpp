#include<iostream>
#include<stdio.h>
using namespace std;

int sumofn(int m){
	if (m<=0){
		return 0;
	}
	else{
		return m+sumofn(m-1);
	}
}

int main(){
	int n,p;
	cin >> n;
	p=sumofn(n);
	cout<<p;
}
