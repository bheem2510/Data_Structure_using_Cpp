// Problem
// There are two groups, one of NN boys and the other of NN girls numbered from 11 to NN.

// You are given two arrays AA and BB containing NN numbers each, denoting the height of boys and girls in the group. You have to form NN couples, where each couple will consist of 11 boy and 11 girl.

// Each couple has a LIKENESS VALUE, where

// LIKENESS VALUE = height of girl in the couple + height of boy in that couple.
// You have to form NN couples in such a way that the maximum of LIKENESS VALUE of all the couples is minimum.

// Note:- No boy or girl can form more than one couple.

// ###Input

// The first line of the input contains a single integer TT denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer NN:- number of boys and number of girls in the group.
// The second line of each test case contains NN space-separated integers, denoting the height of NN boys.
// The third line of each test case contains NN space-separated integers, denoting the height of NN girls.

// Output=> For each test case, print the maximum LIKENESS VALUE in a new line.
//-----------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin>>tt;
	while(tt--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n,greater<int>());
	    int mx=0;
	    for(int i=0;i<n;i++){
	        mx=max(mx,a[i]+b[i]);
	    }
	    cout<<mx<<endl;
	}
	return 0;
}
