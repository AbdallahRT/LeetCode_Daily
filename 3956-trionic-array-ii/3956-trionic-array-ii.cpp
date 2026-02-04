class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n=nums.size();
        long long ans=LLONG_MIN;
        long long prv=nums[0];
        int a,b,c;a=b=c=0;
        for(int i=1;i<n;i++)
        {
            prv+=nums[i];
            if(nums[i]==nums[i-1])
            {
                a=i, prv=nums[i];
            }else if(nums[i-1]>nums[i])
            {
                if(i>1 && nums[i - 2] < nums[i - 1]) {
                    b = i - 1; 
                    while(a<c)prv-=nums[a++];
                    while(a<b-1 && nums[a]<0)prv-=nums[a++];
                }
            }else
            {
                if(i>1 && nums[i-2]>nums[i-1]) c=i-1;
                if(a<b && b<c) ans=max(prv,ans);
            }
        }
        return ans;
    }
};