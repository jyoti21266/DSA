#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void findCombSum(int idx, vector<int>arr,int target,vector<vector<int>>&ans,vector<int>curr){
    if(idx == arr.size()){
        if(target == 0){
            ans.push_back(curr);
        }
        return;
    }

    if(arr[idx] <= target){
        curr.push_back(arr[idx]);
        findCombSum(idx,arr,target-arr[idx], ans,curr);
        curr.pop_back();
    }
    findCombSum(idx+1, arr, target, ans, curr);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Your code here
    int n, target;
    cin>>n;
    vector<int>arr;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cin>>target;
    vector<int>curr;
    findCombSum(0,arr,target,ans,curr);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}