#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int res=0;
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			res=max(sum,res);
		}
	}
	cout<<res<<endl;
	return 0;
}
