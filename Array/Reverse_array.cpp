#include<iostream>
using  namespace std;

int main(){
	int n,k=0;
	 cout<<"Enter the size of array: ";
	 cin>>n;
	 
	 int arr[n];
	 cout<<"Enter alements: ";
	for(int i=0;i<n;i++){
		k++;
	 	cin>>arr[i];
	 }
	
	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
		k++;
	} 
	 cout<<endl<<"Reversed Array: ";
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 	k++;
	 }
	 cout<<k;
	 return 0;
}
