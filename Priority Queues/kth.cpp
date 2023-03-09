//maxheap method

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin() , nums.end());
        int ans = 0;

        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};

//minheap method
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>>pq;
        for(auto itr: nums)
        {
            pq.push(itr);
            if(pq.size() > k) pq.pop();
        }

        return pq.top();
    }
};