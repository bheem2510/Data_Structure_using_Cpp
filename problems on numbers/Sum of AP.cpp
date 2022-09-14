#include<iostream>
using namespace std;

int sumofAP(int a, int b,int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a;
		a+=b;
	}
	return sum;
}
//------------------------------
int main(){
	int a=2,b=4,c=5;
	cout<<"Sum is: "<<sumofAP(2,4,5);
	return 0;
}
