#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int k=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		k++;
	}
	for(int i=n-1;i>=0;i--){
		cout<<arr[i];
		k++;
	}
	cout<<endl<<k;
	return 0;
}
