#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum=a+b;
    return sum;
}

int difference(int a,int b){
    int diff=a-b;
    return diff;
}

int product(int a,int b){
    int prod=a*b;
    return prod;
}

int division(int a,int b){
    int div=a/b;
    return div;
}

int main(){
    int num1;
    string operation;
    cout<<"Enter the expression";
    cin>>num1;
    cin>> operation;
    cout<< operation;
}