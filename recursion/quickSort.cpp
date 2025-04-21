#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findpart(vector<int>&arr, int low,int high){
int pivot = arr[low];
int i=low,j=high;
while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    while(arr[j]>pivot && j>=low+1){
        j--;
    }
    if(i<j)swap(arr[i],arr[j]);
}
swap(arr[low],arr[j]);
return j;
}

void quickSort(vector<int>&arr, int low,int high){
  if(low<high){
    int partition = findpart(arr,low,high);
    quickSort(arr,low,partition-1);
    quickSort(arr,partition+1, high);
  }
}

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}