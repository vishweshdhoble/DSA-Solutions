// Given an unsorted integer array nums, return the smallest missing positive integer

#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i]){
            swap(nums[i], nums[nums[i]-1]);
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1) return i+1;
    } 
    return n+1;
}

int main(){
    int n; 
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<"Smallest Missing Positive Integer is"<<firstMissingPositive(nums)<<endl;
    return 0;
}