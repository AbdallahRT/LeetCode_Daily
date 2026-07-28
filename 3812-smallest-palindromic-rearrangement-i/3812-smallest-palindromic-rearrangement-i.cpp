class Solution {
public:
    string smallestPalindrome(string s) {
    map<char, int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    bool flag=0;
    char odd;
    string sol="";
    for(auto i:mp)
    {
        if(i.second&1)
        {
            flag=1,odd=i.first;
        }
        for(int it=0;it<i.second/2;it++)sol+=i.first;
    }
    string ans=sol;
    if(flag)ans+=odd;
    reverse(sol.begin(),sol.end());
    ans+=sol;
    return ans;
    }
};