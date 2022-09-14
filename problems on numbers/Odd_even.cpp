#include<iostream>
using namespace std;

odd_even(int n){
	return(n%2);
}
int main(){
	int n;
	cout<<"Enter a number to check even or Odd.";
	cin>>n;
	
	if(odd_even(n)==0){
		cout<<"the number is even.";
	}
	else{
		cout<<"The number is odd";
	}
	return 0;
}
