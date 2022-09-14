//================

#include<iostream>
using namespace std;
int GP_sum(int a,int b,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a;
		a*=b;
	}
	return sum;
}
//---------------------
int main(){
	int a=3,b=5,c=2;
	cout<<"The sum of GP sum is: "<<GP_sum(a,b,c);
	return 0;
}
