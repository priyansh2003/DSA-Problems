
//ou are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

//Find two lines that together with the x-axis form a container, such that the container contains the most water.

//Return the maximum amount of water a container can store.

//Notice that you may not slant the container.





class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int minn = INT_MIN;
        while(start < end)
        {   int mini = min(height[start] , height[end]);
            minn = max(minn , mini*(end - start));
            if(height[start] < height[end]) 
            {
                start++;
            }
            else end--;
        }

        return minn;

    }
};