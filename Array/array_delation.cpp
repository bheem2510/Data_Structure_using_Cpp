#include<iostream>
using namespace std;
int main(){
	int array[10],n,position;
	cout<<"Enter the number of elements of the array: ";
	cin>>n;
	
	cout<<"Input the array elements: \n";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"Enter the position: ";
	cin>>position;
	
	if(position>=n+1){
		cout<<"Delation not posible";
	}
	else{
		for(int i=position-1;i<n-1;i++)
		array[i]=array[i+1];
		
		cout<<"\Desplaying arrray after Delation: \n";
		for(int i=0;i<n-1;i++){
			cout<<array[i]<<"\n";
		}
	}
}
