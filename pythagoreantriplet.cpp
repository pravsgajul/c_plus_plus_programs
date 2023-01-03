#include<iostream>
using namespace std;

bool isPythagorean(int x,int y,int z){
	if (x*x==y*y+z*z || y*y==x*x+z*z ||z*z==y*y+x*x){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(isPythagorean(a,b,c)){
		cout<<"Pythagorean Triplet";
	}
	else{
		cout<<"Not Pythagorean Triplet";
	}
}


