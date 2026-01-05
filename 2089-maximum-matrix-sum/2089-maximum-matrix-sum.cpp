class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int mi=INT_MAX;
        long long sum=0;
        int neg=0;
        for(auto i:matrix)
        {
            for(auto j:i)
            {
                mi=min(mi,abs(j));
                if(j<0)neg++;
                sum+=abs(j);
            }
        }
        cout<<neg<<endl<<sum<<endl<<mi;
        if(neg%2==0)
            return sum;

        return sum-mi*2;
    }
};