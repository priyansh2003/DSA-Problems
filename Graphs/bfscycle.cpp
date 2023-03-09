class Solution{
    private:
    bool detect(int src , vector<int> adj[] , vector<int> v[])
    {
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src,-1});

        while(!q.empty())
        {
            int child = q.front().first;
            int parent = q.front().second;
            q.pop();
          
          for(auto itr: adj[node])
          {
            if(!vis[itr])
            {
                vis[itr] = 1;
                q.push({itr , node});
            }
          else if(parent != adjacentNode) 
              {
                  // yes it is a cycle
                  return true; 
              }
          }
      }
      // there's no cycle
      return false; 
    };