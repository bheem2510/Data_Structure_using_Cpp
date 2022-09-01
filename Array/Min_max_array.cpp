#include<bits/stdc++.h>
using namespace std;

int get_min(int arr[],int n){
	int min = arr[0];
	for(int i=1;i<n;i++){
		if(min<=arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}

int get_max(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max>=arr[i]){
			max=arr[i];
		}
	}
	return max;
}
//Code driver
int main(){
	int arr[]={23,12,45,78,56,87,18};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<" Minimum Element of array: "<<get_min(arr,size)<<endl;
	cout<<"Maximum Element of array: "<<get_max(arr,size);
	return 0;
}
