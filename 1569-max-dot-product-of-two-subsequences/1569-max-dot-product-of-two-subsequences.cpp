class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v(nums1.size()+1,vector<int>(nums2.size()+1,-1e9));
        function<int(int,int)>f=[&](int i , int j)->int
        {
            if(i==nums1.size()|| j==nums2.size())return -1e9;
            int &res=v[i][j];
            if(res!= -1e9 )return res;
            res=max( {nums1[i]*nums2[j],nums1[i]*nums2[j]+f(i+1,j+1) ,f(i+1,j),f(i,j+1)});
            return res;
        };
        return f(0,0);
    }
};