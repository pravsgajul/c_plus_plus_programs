#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){
	int i;
	int min;
	for(int i=0;i<size-1;i++){
		min =arr[i];
		for(int j=i+1;j<=size-1;j++){
			if(arr[j]<=min){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionsort(arr,n);
}
