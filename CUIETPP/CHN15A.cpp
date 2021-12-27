// Problem: Mutated Minions
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/CHN15A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Code by: sahilmahla

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int c = 0;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			a[i] += k;
			if(a[i]%7==0) c++;
		}
		cout<<c<<"\n";
	}
}