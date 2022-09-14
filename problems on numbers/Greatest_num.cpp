#include<iostream>
using namespace std;
int great_num(int a,int b){
	return max(a,b);
}
///-----------------------------------------------------
int main(){
	int a=13;
	int b=12;
	cout<<"The greatest number is: "<<great_num(a,b);
	return 0;
}
