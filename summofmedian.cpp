#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,count=0;
        cin>>n>>k;
        vector<int> v(n*k);
        for(int i=0;i<n*k;i++){
            cin>>v[i];
        }
        for(int i=(n-1)/2*k;i<n*k;i+=n/2+1){
            count+=v[i];
        }
        cout<<count<<endl;
    }
    return 0;
}