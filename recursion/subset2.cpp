#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void subsetSum(int idx,vector<int>&arr,int n,vector<int>&curr,vector<vector<int>>&ans){
    ans.push_back(curr);
    for(int i=idx;i<n;i++){
    if(arr[i]==arr[i-1] && i!=idx) continue;
    curr.push_back(arr[i]);
    subsetSum(i+1,arr,n,curr,ans);
    curr.pop_back();
    }
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
    vector<vector<int>>ans;
    vector<int>curr;
    sort(arr.begin(),arr.end());
    subsetSum(0,arr,n,curr,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}