#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
      int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
    // We use this to check if the first column is zero or not
    // if any one of the values in the first column is 0 then 
    // it does the same that entire column becomes 0 
    // that is reflected at the end after backward iteration
    
    // Initializing rows and columns ;
    // since column is vertical we have matrix[0] 
    
    
     
    
     // checking if there is any zero present in the 0th column
    // if yes then we assign col0 to 0 so that at the end we can make 
    // the entire column as zeros
  for (int i = 0; i < rows; i++) {
    //checking if 0 is present in the 0th column or not
    if (matrix[i][0] == 0) col0 = 0;
    for (int j = 1; j < cols; j++) { // starts with 1 because 0th row is reference row
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
         //Assigning the 0th row and column to be 0 if there exist a corresponding 0 in any of its row or column
      }
    }
  }
  //traversing in the reverse direction and
  //checking if the row or col has 0 or not
  //and setting values of matrix accordingly.
  for (int i = rows - 1; i >= 0; i--) {
//Iterating from backwards so that the initial reference column or row doesnt get affected
    for (int j = cols - 1; j >= 1; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
    if (col0 == 0) {
      matrix[i][0] = 0;
    }

  }
}
        
