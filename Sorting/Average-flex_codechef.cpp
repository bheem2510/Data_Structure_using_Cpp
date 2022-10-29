/*
There are NN students in a class, where the ii-th student has a score of A_iA 
i
​
 .

The ii-th student will boast if and only if the number of students scoring less than or equal A_iA 
i
​
  is greater than the number of students scoring greater than A_iA 
i
​
 .

Find the number of students who will boast.

Input Format
The first line contains TT - the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer NN - the number of students.
The second line of each test case contains NN integers A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  - the scores of the students.
Output Format
For each test case, output in a single line the number of students who will boast.
*/


#include <bits/stdc++.h>
using namespace std;
void solution(){
     int n;
	    cin>>n;
	    vector<int>a(n);
	    map<int,int>mp;
	    for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]++;
	    sort(a.begin(),a.end());
	    int ans=mp[a[n-1]];
	    for(int i=n-2;i>=0;i--){
	        if(a[i]!=a[i+1]){
	            int r=n-i-1;
	            if(n-r>r){
	                ans+=mp[a[i]];
	            }
	        }
	    }
	    cout<<ans<<"\n";
}
int main() {
	// your code goes here
	int tc;cin>>tc;while(tc--){
	    solution();
	}
	return 0;
}
