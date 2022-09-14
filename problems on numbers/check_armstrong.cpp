//3.	Check if a number is prime or not
//Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number.
//Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.
#include<bits/stdc++.h>
using namespace std;
int get_armstrong(int n){
	int orignal=n;
	int count=0;
	int temp=n;
	while(temp!=0){
		count++;
		temp/=10;
	}
	int sumofpowers=0;
	while(n!=0){
		int digits=n%10;
		sumofpowers=sumofpowers+pow(digits,count);
		n/=10;
	}
	return(orignal==sumofpowers);
}
//function driver
int main(){
	int n=153;
	if(get_armstrong(n))
	cout<<"The number is armstrong.";
	else
	cout<<"The number is not armstrong";
	return 0;
}
