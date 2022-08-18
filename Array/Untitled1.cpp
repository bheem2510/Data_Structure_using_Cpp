#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]==1){
            cout<<"CHEF"<<endl;
            continue;
        }
        else if(sum%2==0){
            cout<<"CHEFINA"<<endl;
        }
        else{
            cout<<"CHEF"<<endl;
        }
    }
    return 0;
}
