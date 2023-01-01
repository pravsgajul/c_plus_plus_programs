#include<iostream>
using namespace std;

int main(){
	int m;
	cin>>m;
	int n=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(i>=j){
				n=n+1;
				cout<<n;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
