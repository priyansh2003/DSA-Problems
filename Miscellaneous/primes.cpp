class Solution {
public:
    int countPrimes(int n) {
        vector<bool> vis(n,0);
        int ans = 0;
        for(int i = 2 ; i<n ; i++)
        {
            if(vis[i] == 1) continue;
            ans++;
            for(int j = i+i ; j<n ; j+=i)
            {
                vis[j] = 1;
            }
        }
        return ans;
    }
};