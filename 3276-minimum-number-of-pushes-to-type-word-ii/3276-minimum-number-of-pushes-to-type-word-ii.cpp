class Solution {
public:
    int minimumPushes(string word) {
        vector <int>v(26);
        for(char i:word)v[i-'a']++;
        sort(v.rbegin(),v.rend());
        int cont= 0 ;
        for(int i=0;i<26;i++)
        {
            cont+=v[i]*(i/8 + 1);
        }
        
        return cont;
    }

};