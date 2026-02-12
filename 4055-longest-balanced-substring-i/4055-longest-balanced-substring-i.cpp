class Solution {
public:
    int longestBalanced(string s) {
        int ma=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_map<char, int>mp;
            for(int j=i;j<s.size();j++)
            {
                mp[s[j]]++;
                bool ok=true;
                for(auto it:mp)
                {
                    if(it.second!=mp[s[j]])
                    {
                        ok=false;
                        break;
                    }
                }
                ma=ok?max(ma,j-i+1):ma;
            }
        }
        return ma;
    }
};