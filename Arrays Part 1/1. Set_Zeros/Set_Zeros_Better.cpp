// Here we use dummy row and dummy column for assigning zeros if any found in the matrix

void setZeroes(vector < vector < int >> & matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
//   Declaing the dummy vectors with single dimension
  vector < int > dummy1(rows,-1), dummy2(cols,-1);
  
//   Initializing the dummy variables with 0's all
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {
        dummy1[i] = 0;
        dummy2[j] = 0;
      }
    }

  }
  
//   We Just manipulate the main matrix when either the row or the column contains 0 value in it
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (dummy1[i] == 0 || dummy2[j]==0) {
        matrix[i][j] = 0;
      }
    }
  }

}
