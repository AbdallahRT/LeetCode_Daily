class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0 ,en=nums.size()-1 , mid;
        while(st<en)
        {
            mid=(st+en)/2;
            if(nums[mid]<nums[en])
            {
                en=mid;
            }else st=mid+1;
        }
        return nums[st];
    }
};