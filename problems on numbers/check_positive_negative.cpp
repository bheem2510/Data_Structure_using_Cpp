#include<iostream>
using namespace std;

void check(int n){
	if(n>0){
		cout<<"The number is positive";
	}
	else if(n==0){
		cout<<"The number is zero and it is neither positive nor negative";
	}
	else{
		cout<<"The number is negative";
	}
}
//function driver
int main(){
	int num;
	cout<<"Enter a number to check: ";
	cin>>num;
	check(num);
	return 0;
}
