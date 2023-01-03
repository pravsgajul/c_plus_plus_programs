#include<iostream>
using namespace std;

int sumofNN(int n){
	int sum;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int num;
	cin>>num;
	int ans = sumofNN(num);
	cout<<ans;
}
