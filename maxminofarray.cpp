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
	cout<<"Maximum"<<endl;
	int max=0;
	for (int i=0;i<n;i++){
		if (array[i]>max){
			max=array[i];
		}
	}
	cout<<max<<endl;
	cout<<"Minimum"<<endl;
	int min=100000;
	for (int i=0;i<n;i++){
		if (array[i]<min){
			min=array[i];
		}
	}
	cout<<min;
}
