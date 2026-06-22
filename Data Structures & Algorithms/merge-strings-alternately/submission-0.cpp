class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0;
        int p2=0;
        int resp=0;
        string res="";
        while((p1<word1.length())||(p2<word2.length())){
            if(resp%2==0 && p1 < word1.length()){
                res += word1[p1];
                p1++;
                resp++;
            }
            else if (p2 < word2.length()){
                res += word2[p2];
                p2++;
                resp++;
            } 
            else 
                resp++; 
        }
        return res;
    }
};