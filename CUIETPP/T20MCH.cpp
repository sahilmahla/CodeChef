// Problem: Possible Victory
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/T20MCH
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Code by: sahilmahla

#include <bits/stdc++.h>
using namespace std;

int main(){
	int r,o,c;
	cin>>r>>o>>c;
	
	if((20-o)*36 + c >r ){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}