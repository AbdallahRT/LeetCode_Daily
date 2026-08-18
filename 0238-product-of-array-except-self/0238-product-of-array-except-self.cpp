class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int all=1;
        int zero=0;
        for(auto i:nums)
        {
            if(i)all*=i;
            if(i==0)zero++;
        }
        vector<int> ans(nums.size(),0);
        if(zero>1)return ans;
        for(int i=0;i<nums.size();i++)
        {
            if(zero )
            {
                if( nums[i]!=0)ans[i]=0;
                else ans[i]=all;
            }else ans[i]=all/nums[i];
        }
        return ans;
    }
};