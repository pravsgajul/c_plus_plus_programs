#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=n;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}

int nCr(int n,int r){
	int ans=(factorial(n)/(factorial(n-r)*factorial(r)));
	return ans;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i){
				cout<<nCr(i,j);
			}
		}
		cout<<endl;
	}
}
