
// Time complexity   O(n*n)

#include<iostream>
using namespace std;

void swap(int *ap, int *bp){
	int temp= *ap;
	*ap = *bp;
	*bp=temp;
	}
	
	void Selection_sort(int arr[], int size){
		for(int i=0; i<size-1; i++){
			int min_indx=i;
			
			for(int j=i+1; j<size; j++){
				if(arr[j] < arr[i]){
					min_indx=j;
					swap(&arr[min_indx], &arr[i]);
				}
			}
		}
		
	}
	
	void Print_array(int arr[], int size){
		for(int i=0; i<size; i++){
			cout<<arr[i]<<" ";
		}
	}
	// driver
	
	int main(){
		int arr[]={12,32,11,66,54,23,1,0,6,5,3,8,9,10};
		int size=sizeof(arr)/sizeof(arr[0]);
		
		cout<<"Before sorting array "<<endl;
		Print_array(arr,size);
		cout<<"\n After selection sort; "<<endl;
		
		Selection_sort(arr,size);
		Print_array(arr,size);
		
		return 0;
	}
