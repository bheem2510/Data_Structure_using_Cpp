#include<iostream>
using namespace std;

int main(){
	int n1,n2,k;
	cout<<"Enter first array's size: ";
	cin>>n1;
	int arr[n1];
	cout<<"Enter elements: ";
	for(int i=0;i<n1;i++){
		cin>>arr[n1];
	}
	
	cout<<"Enter second array's size: ";
	cin>>n2;
	 
	int arr1[n2];
	cout<<"Enter elements: ";
	for(int i=0;i<n2;i++){
		cin>>arr1[i];
	}
	
	cout<<"Enter sum: ";
	cin>>k;
	
	int index[n2];
	//memset(index,0,sizeof(index));
	while(k--){
		int min=INT_MAX,in=0;
		for(int i=0;i<n2;i++){
			if(arr1[i]+arr[index[i]<min]){
			in = i;
			min=arr[i]+arr1[index[i]];
		}
		}
	
	cout<<"("<<arr[index[in]]<<","<<arr1[in]<<")";
	index[in]++;
}
return 0;
}
