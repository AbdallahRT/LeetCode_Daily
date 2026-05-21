class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int>st;
        for(auto i:arr1)
        {
           while(i)
           {
                st.insert(i);
                i/=10;
           } 
        }
        int ans=0;
        for(auto i:arr2)
        {
            while(i)
            {
                if(st.count(i))break;
                i/=10;
            }
            if(!i)continue;
            int digits = log10(i);
            ans=max(ans,digits+1);
        }
        return ans;
    }
};