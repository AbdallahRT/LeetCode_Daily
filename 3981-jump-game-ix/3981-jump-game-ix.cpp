class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>preMax(n);
        vector<int>sufMin(n);
        vector<int>ans(n);

        preMax[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            preMax[i]=max(preMax[i-1],nums[i]);
        }

        sufMin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sufMin[i]=min(sufMin[i+1],nums[i]);
        }
        
        ans[n-1]=preMax[n-1];
        for(int i=n-2; i>=0;i--)
        {
            if(preMax[i]>sufMin[i+1])ans[i]=ans[i+1];
            else ans[i]=preMax[i];
        }

        return ans;
    }
};