#include<iostream>
using namespace std;

void Insertion_recurtion(int arr[], int size){
	
	if(size<=1)return;
	
	Insertion_recurtion(arr,size-1);
	
	int last=arr[size-1];
	int j = size-2;
	while(j>=0 && arr[j]>last){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=last;
}

void printarray(int arr[], int size){
	cout<<"Printing array after sorting: "<<endl;
	for(int i=0; i<size; i++){
	cout<<arr[i]<<" ";
}
}
//------------------------------
int main(){
	int arr[] = {3,2,7,8,98,23,65,12};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	Insertion_recurtion(arr,size);
	printarray(arr,size);
	
	return 0;
}
