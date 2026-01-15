class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int maH=1;
        int cont=1;
        for(int i=1;i<hBars.size();i++)
        {
            if(hBars[i]-hBars[i-1]==1)cont++;
            else cont=1;

            maH=max(maH,cont);
        }
        int maV=1;
        cont=1;
        for(int i=1;i<vBars.size();i++)
        {
            if(vBars[i]-vBars[i-1]==1)cont++;
            else cont=1;

            maV=max(maV,cont);
        }
        int ans=min(maH,maV)+1;
        return ans*ans;
    }
};