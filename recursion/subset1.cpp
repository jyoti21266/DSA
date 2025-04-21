#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void subsetSum(int idx,vector<int>&arr,int sum,int n,vector<int>&curr){
    if(idx == n){
        curr.push_back(sum);
        return;
    }
    subsetSum(idx+1,arr,sum+arr[idx],n,curr);
    subsetSum(idx+1,arr,sum,n,curr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int>curr;
    subsetSum(0,arr,0,n,curr);
    sort(curr.begin(),curr.end());
    for(int i=0;i<curr.size();i++){
       cout<<curr[i]<<" ";
    }
    return 0;
}