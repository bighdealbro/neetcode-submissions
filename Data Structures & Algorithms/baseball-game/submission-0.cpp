class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int o1 = result[result.size() - 1];
                int o2 = result[result.size() - 2];
                result.push_back(o1 + o2);
            }
            else if(operations[i] == "C"){
                result.pop_back();
            }
            else if(operations[i] == "D"){
                 result.push_back(2 * result.back());
            }
            else {
                result.push_back(stoi(operations[i]));
            }
        }
        
        return accumulate(result.begin(), result.end(), 0);
    }
};
