#include <bits/stdc++.h>
using namespace std;
void solution(){
    int n,xxx;cin>>n>>xxx;
    int arr[n];long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int arr2[xxx][2],temp;
    for(int i=0;i<xxx;i++){
        cin>>arr2[i][0];
        cin>>arr2[i][1];
        
    }
    for(int i=0;i<xxx;i++){
        temp=arr2[i][1]-arr2[i][0];
        temp++;
        if(temp%2==0)
        continue;
        else 
        sum++;
    }
    cout<<sum<<endl;
    
}
int main() {
	// your code goes here
	int tc;cin>>tc;while(tc--){
	    solution();
	}
	return 0;
}
