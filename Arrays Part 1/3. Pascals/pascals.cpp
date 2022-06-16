class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            // Since the next line in the triangle should have more numbers that the previous one
            r[i][0] = r[i][i] = 1;
            // Since the first and last element should be 1 
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
            // Here we change only the column but the present element is the sum of previous row'th elements in different colums
        }
        
        return r;
    }
};

// TC : O(n^2)
// SC : O(n^2)
