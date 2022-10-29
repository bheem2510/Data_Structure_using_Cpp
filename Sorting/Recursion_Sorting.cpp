#include<bits/stdc++.h>
using namespace std;

void Recurtion_Sort(int arr[], int size){
	
	if(size==1)
	return;


for(int i=0; i<size-1; i++){
	if(arr[i] > arr[i+1]){
		swap(arr[i], arr[i+1]);
	}
	Recurtion_Sort(arr, size-1);
}
}

void Print_array(int arr[],int size){
	cout<<"Printing array after recurion sorting: "<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}

//-----------------------------------------------------

int main(){
	int arr[] = {34,23,12,85,3,8,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	Recurtion_Sort(arr,size);
	Print_array(arr,size);
	return 0;
}
