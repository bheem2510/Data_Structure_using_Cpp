#include<iostream>
using namespace std;

void Leap(int n){
	if((n%4==0&&n%100!=0)||n%400==0){
		cout<<n<<" is a Leap year.";
	}
	else {
		cout<<n<<" is not a Leap year";
	}
}
//function driver
int main(){
	int year;
	cout<<"Enter a year t check whether a leap year or not.";
	cin>>year;
	Leap(year);
     return 0;
}
