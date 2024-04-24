#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    {
        int x=22;
        ptr=&x;
    }
    cout<<ptr;
    
}