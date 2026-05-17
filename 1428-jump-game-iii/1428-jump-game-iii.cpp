class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n =arr.size();
        vector<bool>vis(n,0);
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while(q.size())
        {
            int ind=q.front();
            q.pop();
            if(arr[ind]==0)return true;
            int nx=ind+arr[ind];
            int pv=ind-arr[ind];
            if(nx<n&&!vis[nx])
            {
                vis[nx]=1;
                q.push(nx);
            }
            if(pv>=0&&!vis[pv])
            {
                vis[pv]=1;
                q.push(pv);
            }
        }
        return false;
    }
};