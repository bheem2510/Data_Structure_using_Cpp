#include<iostream>
using namespace std;

//Using max function
int great_num(int a,int b,int c){
	return max(a,(b,c));
}
//using if-else statement
void great_num1(int a,int b,int c){
	cout<<"Using if-else statement: "<<endl;
	if(a>b&&a>c){
		cout<<"Greatesr number is: "<<a;
	}
	else if(b>c&&b>a){
		cout<<"Greatest number is; "<<b<<endl;
	}
	else{
		cout<<"Greatest number is: "<<c<<endl;
	}
}
//-------------function driver
int main(){
	int a,b,c;
	cout<<"Enter three number : ";
	cin>>a>>b>>c;
	cout<<"Using max function Greatest number is: "<<great_num(a,b,c);
	great_num1(a,b,c);
	
	return 0;
}
