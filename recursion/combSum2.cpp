//no repeated elements

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void findCombSum(int idx, vector<int>arr,int target,vector<vector<int>>&ans,vector<int>curr){
    if(target == 0){
        ans.push_back(curr);
        return;
    }

    for(int i=idx;i<arr.size();i++){
        if(i>idx && arr[i] == arr[i-1])continue;
        if(arr[i]>target) break;
        curr.push_back(arr[i]);
        findCombSum(i+1,arr,target-arr[i],ans,curr);
        curr.pop_back();
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
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
    sort(arr.begin(),arr.end());
    findCombSum(0,arr,target,ans,curr);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
