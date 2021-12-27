// Problem: Chef and Coupon
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/COUPON2
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Code by: sahilmahla

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int d,c,a1,a2,a3,b1,b2,b3;
		cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
		
		int c1 = a1+a2+a3;
		int c2 = b1+b2+b3;
		int cd = c1+c2+d+d;
		int cc;
		if(c1 < 150 && c2 < 150){
			cout<<"NO\n";
			continue;
		}		
		if(c1 >= 150 && c2>= 150){
			cc = c1+c2+c;
		}
		else if(c2 >= 150 || c1>=150){
			cc = c1+c2+d+c;
		}

	//	cout<<cc<<" "<<cd;
		if(cc < cd ){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}	
	}
}