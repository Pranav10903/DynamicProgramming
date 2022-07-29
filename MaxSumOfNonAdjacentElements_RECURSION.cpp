#include<bits/stdc++.h>
int f(int ind,vector<int>&nums){
    if(ind==0){
        return nums[0];
    }
    int Take = 0,NotTake = 0;
    if(ind>1) Take = nums[ind]+f(ind-2,nums);
    NotTake = 0 +f(ind,nums);
    return max(Take,NotTake);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    return f(nums.size()-1,nums);
}
