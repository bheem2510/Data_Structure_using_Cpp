#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans;
void solution() {
   cin>>n;ans=0;
   while(n%2==0) {ans++;n/=2;}
   if(ans%2==1) {ans--;n*=2;}
   for(int i=0;i*i<=n;++i) {
      int xxx=n-i*i,xy=sqrt(xxx);
      if(xy*xy==xxx) {
         cout << (xy<<(ans/2)) << ' ' << (i<<(ans/2)) << endl;
         return;
      }
   }
   cout<<"-1"<<endl;
}
signed main() {
   int tc; cin>>tc;
   while(tc--) solution();
}
