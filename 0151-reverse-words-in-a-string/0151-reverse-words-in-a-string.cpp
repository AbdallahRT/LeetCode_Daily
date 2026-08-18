class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        for(int i=0;i<s.size();i++)
        {
        
            if(s[i]!=' ')
            {
                int st=i;
                while(i<s.size() && s[i]!=' ')i++;
                string word=s.substr(st,i-st);
                v.push_back(word);
                i--;
            }
        }
        reverse(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
            if(i!=v.size()-1)ans+=" ";
        }
        return ans;
    }
};