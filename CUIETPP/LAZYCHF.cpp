// Problem: Lazy Chef
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/LAZYCHF
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Code by: sahilmahla

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,m,d;
		cin>>x>>m>>d;
		
		if(x*m < x+d){
			cout<<x*m<<"\n";
		}else{
			cout<<x+d<<"\n";
		}
	}
}