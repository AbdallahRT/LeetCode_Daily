class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int ans=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(st.size() && st.top()=='a' && s[i]=='b')
            {
                ans++;
                st.pop();
            }else
                st.push(s[i]);
        }
        while(st.size())
        {
            cout<<st.top();st.pop();
        }
        return ans;
    }
};