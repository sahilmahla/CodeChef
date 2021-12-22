// Problem: Greedy puppy
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/GDOG
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s = 0;
		for(int i = 1;i<=k;i++){
			s = max(s,n%i);
		}
		cout<<s<<"\n";
	}
	return 0;
}