//Coded by bheeem
//

#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
//function driver
int main(){
	int x=3;
	bool ans=isPrime(x);
	if(ans==true){
		cout<<"The number is a Prime number"<<endl;
	}
	else{
		cout<<"The number is not Prime"<<endl;
	}
	return 0;
}
