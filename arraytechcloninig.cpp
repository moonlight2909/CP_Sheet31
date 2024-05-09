#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int>mp;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mp[x]+=1;
		}
		int lg=0;
		for(auto i:mp){
			lg=max(lg,i.second);
		}
		int ans=0;
		while(lg<n){
			ans+=1;
			int del=min(lg,n-lg);
			ans+=del;
			lg+=del;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

