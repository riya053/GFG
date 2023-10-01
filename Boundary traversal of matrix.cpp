You are given a matrix of dimensions n x m. The task is to perform boundary traversal on the matrix in a clockwise manner.

Example 1:

Input:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15,16}}
Output: 1 2 3 4 8 12 16 15 14 13 9 5
Explanation:
The matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The boundary traversal is:
1 2 3 4 8 12 16 15 14 13 9 5
Example 2:

Input:
n = 3, m = 4
matrrix[][] = {{12, 11, 10, 9},
         {8, 7, 6, 5},
         {4, 3, 2, 1}}
Output: 12 11 10 9 5 1 2 3 4 8

  Solution:

vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
         
       
            for(int p=0;p<m;p++)
            {
                ans.push_back(matrix[0][p]);
            }
            for(int p=1;p<n;p++)
            {
                ans.push_back(matrix[p][m-1]);
            }
            if(n==1)
            {
                return ans;
            }
            for(int p=m-2;p>=0;p--)
            {
                ans.push_back(matrix[n-1][p]);
            }
            if(m==1)
            {
                return ans;
            }
            for(int p=n-2;p>0;p--)
            {
                ans.push_back(matrix[p][0]);
            }
        
        return ans;
    }
