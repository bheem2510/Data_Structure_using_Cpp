#include<iostream>
using namespace std;

void MinMax(int n){
	int rem,mini=9,maxi=0;
	while(n>0){
		rem=n%10;
		mini=min(mini,rem);
		maxi=max(maxi,rem);
		n/=10;
	}
	cout<<"Minimum => "<<mini<<endl;
	cout<<"Maximum => "<<maxi<<endl;
}
int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	MinMax(n);
	return 0;
}
/* 
     Time complexity  = O(log N)
    Space complexity  O(1)
    */
