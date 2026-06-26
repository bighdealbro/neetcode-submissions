class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    map<vector<int>, vector<string>> track;

    for (string s : strs){
        vector<int> count(26, 0);

        for (char c : s)
            count[c - 'a']++;
        track[count].push_back(s);
    }
    vector<vector<string>> result;
    for (auto &[key, value] : track)
        result.push_back(value);
    return result;
    }
};