#include<bits/stdc++.h>

using namespace std;

vector<int> fun1(vector<int>&nums,int pivot)
{
    int n=nums.size();
    vector<int>ans(n,pivot);
    int i = 0,j = n-1;
    while(i<n)
    {
        if(nums[i]<pivot){
            ans[i]=nums[i];
        }
        int j = n-i-1;
        if(nums[i]>pivot){
            ans[j]=nums[i];
        }

        i++;
    }
    return ans; 

}