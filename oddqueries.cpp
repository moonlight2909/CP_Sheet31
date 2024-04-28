#include <bits/stdc++.h>
using namespace std;

int main(){
    long long much,n,x,a,b,c,d,p=0;
    cin >> much;
    for(int m=0;m<much;m++){
		p=0;
    cin >> x >> n;
    long long arr[x+100],arr2[x+100];
    for(int i=0;i<x;i++){
        cin >> arr[i];
        p+=arr[i];
        arr2[i] = p;
    }
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a-1==0&&b==x){
            d = (b-a+1)*c;
        }
        else if(a-1==0){
            d = arr2[x-1]-arr2[b-1]+(b-a+1)*c;
        }
        else if(b==x){
            d = arr2[a-2]+(b-a+1)*c;
        }
        else{
        d = arr2[x-1]-(arr2[b-1]-arr2[a-2])+(b-a+1)*c;
        }
        if(d%2!=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    }
     return 0;
}
  	  	  			  	   			  	 	 					