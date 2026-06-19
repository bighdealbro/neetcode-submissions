class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        bool flag=true;
        unordered_map<char,int> seen;
        for(int i=0;i<s.length();i++){
            seen[s[i]]++;
            seen[t[i]]--;
        }
        for(char ch:t){
            if(seen[ch]!=0)
                flag=false;
        }
        return flag;
        
    }
};
