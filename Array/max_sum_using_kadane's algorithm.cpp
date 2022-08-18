#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int max_sum=INT_MIN,curr_sum=0;
	
	for(int i=0;i<n;i++){
		
		curr_sum += arr[i];
		
		if(max_sum < curr_sum){
			max_sum = curr_sum;
		}
		
		if(curr_sum < 0 ){
			curr_sum = 0;
		}
	}
	cout<<max_sum<<endl;
	return 0;
}
