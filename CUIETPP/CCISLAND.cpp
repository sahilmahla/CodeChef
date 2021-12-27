// Problem: Chef On Island
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/CCISLAND
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Code by: sahilmahla

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;
		
		if(x/xr >= d && y/yr >= d){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}