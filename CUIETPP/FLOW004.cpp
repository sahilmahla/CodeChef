// Problem: First and Last Digit
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/FLOW004
// Memory Limit: 256 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string n,sa,sb;
		cin>>n;
		sa += n[0];
		sb += n[n.length()-1];
		int a = stoi(sa);
		int b = stoi(sb);
		cout<<a+b<<"\n";
	}
	return 0;
}