// Problem: GCD and LCM
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/FLOW016
// Memory Limit: 256 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		cout<<__gcd(a,b)<<" "<<(a/__gcd(a,b))*b<<"\n";
	}
	
	return 0;
}
