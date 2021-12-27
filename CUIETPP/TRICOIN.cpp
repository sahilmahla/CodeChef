// Problem: Coins And Triangle
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/TRICOIN
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Code by: sahilmahla

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<(long long int )(sqrt(1+8*n)-1)/2<<"\n";
	}
	
	return 0;
}