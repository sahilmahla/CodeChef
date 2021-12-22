// Problem: Mahasena
// Contest: CodeChef - CUIETPP
// URL: https://www.codechef.com/CUIETPP/problems/AMR15A
// Memory Limit: 256 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a , even = 0,odd = 0;
	for(int i = 0;i<n;i++){
		cin>>a;
		if(a%2 == 0){
			even++;
		}else{
			odd++;
		}
	}
	if(even>odd){
		cout<<"READY FOR BATTLE\n";
	}else{
		cout<<"NOT READY\n";
	}
	
	return 0;
	
}