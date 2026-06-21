class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) 
            return false;

        int rows = matrix.size();
        int columns = matrix[0].size();
        int top = 0;
        int bot = rows - 1;
        int targetRow = -1;

        while (top <= bot) {
            int midRow = top + (bot - top) / 2;
            if (target >= matrix[midRow][0] && target <= matrix[midRow][columns - 1]) {
                targetRow = midRow;
                break; 
            }
            else if (target > matrix[midRow][columns - 1]) 
                top = midRow + 1;
            else
                bot = midRow - 1; 
        }

        if (targetRow == -1) 
            return false;
        int left = 0;
        int right = columns - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[targetRow][mid] == target) 
                return true;
            else if (matrix[targetRow][mid] < target) 
                left = mid + 1;
            else 
                right = mid - 1;
        }

        return false;
    }
};
