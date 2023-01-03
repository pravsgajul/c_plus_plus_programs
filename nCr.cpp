#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=n;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int m,r;
	cin>>m>>r;
	int ans=(factorial(m)/(factorial(m-r)*factorial(r)));
	cout<<ans;
}
