#include<iostream>
#include<cmath>
using namespace std;

void isprime(int num){
	for(int i=2;i<sqrt(num);i++){
		if(num%i==0){
			break;
		}
		else{
			cout<<num<<endl;
		}
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	for(int j=m;j<n;j++){
		isprime(j);
	}
}
