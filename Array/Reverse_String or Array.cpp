#include<iostream>
using namespace std;

void Reverse_Array(int arr[],int start, int END){
	int temp;
     while(start>END){
     	temp = arr[start];
     	arr[start] = arr[END];
     	arr[END] = temp;
	 }
}

void Print_Array(int arr, int n){
	cout<<" Array after reversing: "<<endl;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

//code driver

int main(){
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	Reverse_Array(arr,0,size-1);
	Print_Array(arr,size);
	
	
}
