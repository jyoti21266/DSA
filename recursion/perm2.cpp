#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void perm(vector<int>arr,int idx,vector<vector<int>>&ans,vector<int>curr){
    if(idx==arr.size()){
        
        ans.push_back(arr);
        // curr.resize(0);
        return;
    }
    
    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        perm(arr,idx+1,ans,curr);
        swap(arr[i],arr[idx]);
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
    vector<bool>freq(n,false);
    vector<vector<int>>ans;
    vector<int>curr;
    perm(arr,0,ans,curr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}