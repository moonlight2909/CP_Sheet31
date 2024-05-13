#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n =arr1.size();
    int m =arr2.size();
    vector<int> arr3(n+m);
    int i=0;//arr1
    int j=0;//arr2
    int k=0;//arr3
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    // for remaining element
    if(i==n){/// arr1 ka sara element full hoo toh
        while(j<m-1){
            arr3[k]==arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<n-1){
            arr3[k]==arr1[i];
            i++;
            k++;
        }
    }
    return arr3;

}
int main()
{
    // int arr1[5]={1,3,5,7,9};
    vector<int> arr1;

    arr1.push_back(9);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(10);
    arr1.push_back(9);
    vector<int> arr2;

    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(10);

    vector<int> v = merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

    // int arr2[5]={2,4,6,8,10};
    // int arr3[10]
}