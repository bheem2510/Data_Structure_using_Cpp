#include<bits/stdc++.h>
using namespace std;

void swap1(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	cout<<"Please Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i=i+2){
		if(i>0 && arr[i] < arr[i-1]){
			swap1(&arr[i],&arr[i-1]);
		}
		
		if(i<n-1 && arr[i]<arr[i+1]){
			swap1(&arr[i],&arr[i+1]);
		}
	}
	cout<<"Sorted Array in waveform: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
