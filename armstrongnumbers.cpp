#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	cin>>num;
	int number = num;
	int arm=0;
	while(num>0){
		int lastdigit=num%10;
		arm=arm+pow(lastdigit,3);
		num=num/10;
	}
	if(arm==number){
		cout<<arm<<endl;
		cout<<"Number is armstrong number";
	}
	else{
		cout<<arm<<endl;
		cout<<"Not an armstrong number";
	}
}
