//Sorted Substring

#include <iostream>
using namespace std;
void solution(){
    int n;cin>>n;string str;cin>>str;
    int ans=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0' && str[i-1]=='1')ans++;
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int tc;cin>>tc;while(tc--){
	    solution();
	}
	return 0;
}
