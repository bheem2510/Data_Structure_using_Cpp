#include<iostream>
#include<math.h>
using namespace std;

bool check_prime(int n){
	if(n==1){
		false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void Print_Prime(int a,int b)
{
	for(int i=a;i<=b;i++){
		if(check_prime(i)){
			cout<<i<<" ";
		}
	}
}

//function Driver
int main(){
	int min=50;
	int max=100;
	Print_Prime(min,max);
	return 0;
}
