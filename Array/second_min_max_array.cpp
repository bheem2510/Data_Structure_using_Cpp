#include<iostream>
using namespace std;

int sec_min(int arr[],int n)
{
	 for(int i=0;i<n;i++){
	 	for(int j=i+1;j<n;j++){
	 		if(arr[i]<arr[j]){
	 			int temp=arr[i];
	 			arr[i]=arr[j];
	 			arr[j]=temp;
			 }
		 }
	 }
	 return arr[n-2];
}
int sec_max(int arr[],int n)
{
	 for(int i=0;i<n;i++){
	 	for(int j=i+1;j<n;j++){
	 		if(arr[i]>arr[j]){
	 			int temp=arr[i];
	 			arr[i]=arr[j];
	 			arr[j]=temp;
			 }
		 }
	 }
	 return arr[n-2];
}
//code driver
int main(){
	int arr[]={23,34,56,12,54,76,32,54,90};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Second largest element: "<<sec_max(arr,size);
	cout<<endl<<"Second minimum element: "<<sec_min(arr,size);
	return 0;
}
