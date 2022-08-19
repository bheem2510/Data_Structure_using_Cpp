#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,arr[n],temp;
	cout<<"Enter number of Elements in the array: ";
	cin>>n;
	cout<<"Enter elemetnts: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array after using Bubble sort: ";
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
