#include<bits/stdc++.h>
using namespace std;
int main(){
	int array[]={123,13,34,42,32,54,67,75,3,54,567};
	int l=sizeof(array)/sizeof(array[0]);
	cout<<"Elements of the array before sorting ==> "<<endl<<endl;
	for(int i=0;i<l;i++){
		cout<<array[i]<<" ";
	}
	sort(array,array+l);
	cout<<endl<<"Elements of the array after sorting ==> "<<endl<<endl;
	for(int i=0;i<l;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
