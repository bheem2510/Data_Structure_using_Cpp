#include<iostream>
using namespace std;

int find_majority(int arr[],int size){
	int maj_ind=0,count=1;
	for(int i=1;i<size;i++){
		if(arr[i] ==arr[maj_ind]){
		count++;
		}
		else {
			count--;
		}
		if(count==0){
			maj_ind=i;
			count=1;
		}
		
	}
	return arr[maj_ind];
}

int check_majority(int arr[],int size,int k){
	int count=0;
	
	for(int i=0;i<size;i++){
		if(arr[i] == k){
			count++;
		}
	}
	if(count>size/2){
		return 1;
	}
	else{
		return 0;
}
}


int main(){
	int n,k;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	k=find_majority(arr,n);
	
	if(check_majority){
		cout<<"Majority elements is: ";
		cout<<k<<endl;
	}
	else{
		cout<<"There is no majority element."<<endl;
	}
	return 0;
}
