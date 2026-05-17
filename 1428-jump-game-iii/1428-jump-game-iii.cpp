class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n =arr.size();
        vector<bool>vis(n,0);
        queue<pair<int,int>>q;
        q.push({start,arr[start]});
        vis[start]=1;
        while(q.size())
        {
            auto [ind , val]=q.front();
            q.pop();
            if(val==0)return true;
            int nx=ind+val;
            int pv=ind-val;
            if(nx<n&&!vis[nx])
            {
                vis[nx]=1;
                q.push({nx,arr[nx]});
            }
            if(pv>=0&&!vis[pv])
            {
                vis[pv]=1;
                q.push({pv,arr[pv]});
            }
        }
        return false;
    }
};