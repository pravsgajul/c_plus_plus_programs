#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string n;
	cin>>n;
	int m=n.length();
	
	char* char_arr[m];
	for (int i=0;i<m;i++){	
    	char_arr[i] = &n[i];
	}
	
    for (int i=m-1;i>=0;i--){
    	char a=  *char_arr[i];
    	cout<<a<<endl;
    //	cout<<char_arr[i];
	}
     
}
