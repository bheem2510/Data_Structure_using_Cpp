#include<iostream>
using namespace std;

//--------------- Left Rotation --------------------
int RotLeft(int arr[], int n ,int d){
	int first,j;
	for(int i=0;i<d;i++){
		first = arr[0];
		for(j=0;j<n-1;j++){
			arr[j] = arr[j+1];
		}
		arr[j] = first;
	}
	return *arr;
}

//--------------- Right Rotation -----------------------------
int RotRight(int arr[], int n, int d){
	int j,first;
	for(int i=0;i<d;i++){
		first = arr[n-1];
		for(int j=n-1;j>=0;j--){
			arr[j] = arr[j-1];
		}
		arr[0] = first;
	}
	return *arr;
	
	
//--------------Code Driver ----------------------------

int main(){
	
	int n,d;
	char choice;
	cout<<"Enter size of the array: ";
	cin>>n;
	
	
	int arr[n];
	cout<<endl<<"Enter elements of the array = ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter number of thies rotation need to be done = ";
	cin>>d;
	
	cout<<"What type of rotation need to be done n(L/R)? = ";
	cin>>choice;
	
	if(choice=='L'){
		RotLeft(arr,n,d);
		
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	
	else if(choice=='R'){
		RotRight(arr,n,d);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	
	else{
		cout<<"Not a valid choice. Please try again.";
	}
	
	return 0;
}
