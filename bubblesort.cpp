#include<iostream>
using namespace std;

void bubblesort(int A[],int n){
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-2;j++){
			if(A[j+1]<A[j]){
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		}
	}
	return;
}

int main(){
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}	
}
