#include<iostream>
using namespace std;

int get_Palindrom(int x){
	int ans=0;
	while(x>0){
		int rem=x%10;
		ans=ans*10+rem;
		x/=10;
	}
	return ans;
}
//function Driver
int main(){
	int x=121;
	int temp=x;
	int y=get_Palindrom(x);
	if(temp==y){
		cout<<"THe number is palindrom."<<endl;
	}
	else{
		cout<<"The number is not palindrom.";
	}
	return 0;
}
