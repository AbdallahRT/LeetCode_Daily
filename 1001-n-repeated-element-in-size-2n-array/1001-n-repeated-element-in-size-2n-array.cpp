#include <bits/stdc++.h>
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       map<int,int>mp;
       for(auto i:nums)mp[i]++;
       int ans;
       for(auto i:mp)
            if(i.second==nums.size()/2)
                ans= i.first; 
        return ans;
    }
};