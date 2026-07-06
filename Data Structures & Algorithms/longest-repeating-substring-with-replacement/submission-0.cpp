class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int max_freq=0;
        int max_len=0;
        unordered_map<char,int> count;
        for(int right=0;right<s.size();right++){
            count[s[right]]++;

            max_freq=max(max_freq,count[s[right]]);

             if ((right - left + 1) - max_freq > k) {
                count[s[left]]--;
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};
