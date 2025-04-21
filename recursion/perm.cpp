#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void perm(vector<int>arr,vector<bool>freq,vector<vector<int>>&ans,vector<int>curr){
    if(curr.size() == arr.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            freq[i] = true;
            curr.push_back(arr[i]);
            perm(arr,freq,ans,curr);
            freq[i] = false;
            curr.pop_back();
        }
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
    perm(arr,freq,ans,curr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}