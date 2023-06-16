#include<iostream>
using namespace std;

int binarysearch(int m,int arr[],int k){
	int l=0;
	int r=m;
	while(l<=r){
		int mid=(l+r)/2;
		if(arr[mid]==k){
			return mid;
			break;
		} 
		else if(arr[mid]>k){
			r=mid-1;
		}
		else{
			l=mid+1;
		}	
	}
}

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
	cout<<"Enter the key:"<<endl;
	cin>>k;
	cout<<binarysearch(n,array,k);
}
