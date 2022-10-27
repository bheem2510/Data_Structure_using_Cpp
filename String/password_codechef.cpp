#include <bits/stdc++.h>
using namespace std;
void solution(){
    string str;cin>>str;
    int n=(int)str.size();
    
    bool lower=false,upper=false,special=false,integer=false,size=false;
    for(int i=0;i<n;i++){
        if(str[i]>='a'&&str[i]<='z') lower=true;
        if(i!=0 && i!=n-1){
        if(str[i]>='A'&&str[i]<='Z')upper=true;
        if(str[i]>='0'&&str[i]<='9')integer=true;
        if(str[i]=='@'||str[i]=='%'||str[i]=='#'||str[i]=='&'||str[i]=='?')special=true;
        }
    }
    if(n>=10) size=true;
    if(size && lower&&upper&&integer&&special) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
	int tc;cin>>tc;while(tc--){solution();}
	return 0;
}
