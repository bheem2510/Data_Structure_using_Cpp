#include<iostream>
using namespace std;

int main(){
	int n,c=0,index=-1;
	
	cout<<"Please enter size fo the array: ";
	cin>>n;
	int arr[n];
	
	cout<<"Enter alements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count>c)
		{
			c=count;
			index=i;
		}
	}
	cout<<"Majority element is "<<arr[index];
	return 0;
}
