//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]!= 0)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        for(int i = index ; i<nums.size() ; i++)
        {
            nums[i] = 0;
        }

    }
};