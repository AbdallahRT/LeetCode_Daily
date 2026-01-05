class Solution {
public:
    vector<int> div(int n)
    {
        vector<int >v;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if (n / i == i) {
                    v.push_back(i);
                } else {
                    v.push_back(i);v.push_back(n/i);
                }
            }
        }
        return v;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto i:nums)
        {
            vector<int>v=div(i);
            if(v.size()==4)
            {
                int sum=accumulate(v.begin(),v.end(),0LL);
                ans+=sum;
            }
        }
        return ans;
    }
};