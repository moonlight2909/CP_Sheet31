#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str[0]==str[str.size()-1]){
            cout<<str<<endl;
        }
        else{
            str.pop_back();
            str.push_back(str[0]);
            cout<<str<<endl;
        }
    }
    return 0;
}