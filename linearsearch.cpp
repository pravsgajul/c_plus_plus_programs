#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int array[n];
	cout<<"Enter the Array elements:"<<endl;
	for (int i=0;i<n;i++){
		cin>>array[i];
	}
	int k;
	cout<<"Enter the key";
	cin>>k;
	for (int i=0;i<n;i++){
		if(array[i]=k){
			cout<<"Element Found."<<endl;
			break;
		}
	}
}
