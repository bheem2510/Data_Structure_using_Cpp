#include<iostream>
using namespace std;

int reverse_number(int n){
	int rem,rev=0;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
///------------------------------
/*  Time complexity O(log n)
    Space O(1)
             */
             
int main(){
	int num;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Reverse number is : "<<reverse_number(num);
	return 0;
}
