#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void subseq(int ind, vector<int> &ds, int arr[], int n){
if(ind==n){
    for(int i=0;i<ds.size();i++){
        cout<<ds[i];
    }
    cout<<"\n";
    return;
}
ds.push_back(arr[ind]);
subseq(ind+1, ds, arr, n);
ds.pop_back();
subseq(ind+1, ds,arr,n);
}

int main(){
    int arr[4] = {3,1,2,9};
    int n=4;
    vector<int>ds;
    subseq(0, ds, arr, n);
}