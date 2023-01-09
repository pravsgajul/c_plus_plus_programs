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
	cout<<"Display of the array elements:"<<endl;
	for (int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}
