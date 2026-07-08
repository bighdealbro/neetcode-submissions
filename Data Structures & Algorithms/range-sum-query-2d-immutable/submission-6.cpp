class NumMatrix {
public:
    int** prefixSum;
    int numRows;
    int numCols;
    NumMatrix(vector<vector<int>>& matrix) {
        numRows = matrix.size();
        numCols = (numRows > 0) ? matrix[0].size() : 0;
        prefixSum = new int*[numRows + 1];
        for (int i = 0; i <= numRows; i++) {
            prefixSum[i] = new int[numCols + 1];
            for (int j = 0; j <= numCols; j++) {
                prefixSum[i][j] = 0;
            }
        }
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                prefixSum[i + 1][j + 1] = matrix[i][j]+ prefixSum[i][j + 1]+ prefixSum[i + 1][j]- prefixSum[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2 + 1][col2 + 1] - prefixSum[row1][col2 + 1] - prefixSum[row2 + 1][col1] + prefixSum[row1][col1];
    }

    ~NumMatrix() {
        for (int i = 0; i <= numRows; i++) {
            delete[] prefixSum[i];
        }
        delete[] prefixSum;
    }
};
