#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,sum;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Please Enter the sum: ";
	cin>>sum;
	for(int i=0;i<n;i++){                   // complexity is O(n*n)
		for(int j=i;j<n;j++){
			if(arr[i] + arr[j] == sum){
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}
		}
	}

//	unordered_set<int> s;
//	for(int i=0;i<n;i++)
//	{
//		int temp = sum-arr[i];
//		if(temp>=0 &&s.find(temp)!=s.end())
//		cout<<arr[i]<<" "<<temp<<endl;
//	}
	return 0;
}
