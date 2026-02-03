class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        vector<char>c;
        vector<char>ch={'i','d','i'};
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])return false;
            if(nums[i]<nums[i+1])c.push_back('i');
            else c.push_back('d');
        }
        c.erase(unique(c.begin(),c.end()),c.end());
        return c==ch;
    }
};