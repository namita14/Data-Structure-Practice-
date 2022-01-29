#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                ans=nums[i-1];
                break;
            }
        }
    return ans;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findDuplicate(nums);
