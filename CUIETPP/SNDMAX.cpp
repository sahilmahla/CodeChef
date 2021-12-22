// Problem: Second Max of Three Numbers
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/SNDMAX
// Memory Limit: 256 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[3];
		for(int i = 0;i<3;i++){
			cin>>a[i];
		}
		sort(a,a+3);
		cout<<a[1]<<"\n";	
	}
	return 0;
}