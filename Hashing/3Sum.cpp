/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //time complexity is O(n*n)
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1, k=n-1;
            while(j<k){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                if(sum==0){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    res.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }else if(sum<0)j++;
                else k--;
            }
        }
        return res;
    }
};