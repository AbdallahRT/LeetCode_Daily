class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros=0;
        vector<int> v;
        for(auto i:nums)
        {
            if(!i){zeros++; continue;}
            v.push_back(i);
        }
        while(zeros--)v.push_back(0);
        nums=v;
    }
};