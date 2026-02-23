class Solution {
public:
    bool hasAllCodes(string s, int k) {
        string tmp=s.substr(0,k);
        set<string>st;
        st.insert(tmp);
        for(int i=k;i<s.size();i++)
        {
            string cur=tmp.substr(1);
            cur.push_back(s[i]);
            st.insert(cur);
            tmp=cur;
        }
        return st.size()==(1<<k);

    }
};
