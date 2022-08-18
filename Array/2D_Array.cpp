#include<iostream>
using namespace std;

int main(){
	
	// an array with 2 rows and 3 columns
	int x[2][3] = {{1,2,3},{4,5,6}};
	
	
	//output each array element's value
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			
			cout<<"Elements at x["<<i<< "]["<<j<<"]: ";
			cout<<x[i][j]<<endl;
		}
	}
	return 0;
}
