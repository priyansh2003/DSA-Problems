// Question
//Given an integer array nums, find the  subarray which has the largest sum and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int minn = INT_MIN;
        int curSum = 0;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            curSum = max(curSum + nums[i] , nums[i]);
            minn = max(minn , curSum);
        }
        return  minn;
    }
    
};

// standard h ratt le isko