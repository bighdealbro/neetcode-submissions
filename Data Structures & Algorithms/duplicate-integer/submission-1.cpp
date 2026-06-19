#include <vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        if (nums.empty()) return false;
        // Find the range of numbers to map them accurately
        int min_val = nums[0];
        int max_val = nums[0];
        for (int num : nums) {
            if (num < min_val) min_val = num;
            if (num > max_val) max_val = num;
        }
        
        // C++ optimizes vector<bool> to use exactly 1 bit per element
        std::vector<bool> bitset((long long)max_val - min_val + 1, false);
        
        for (int num : nums) {
            int mapped_index = num - min_val;
            if (bitset[mapped_index]) {
                return true; // Bit was already 1, duplicate found!
            }
            bitset[mapped_index] = true;
        }
        
        return false;
    }
};