#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int m;
	cin>>m;
	bool flag=0;
	for (int i=2;i<=sqrt(m);i++){
		if(m%i==0){
			cout<<"Non Prime";
			flag = 1;
			break;
		}
	}
	if (flag==0){
		cout<<"Prime"<<endl;
	}
}
