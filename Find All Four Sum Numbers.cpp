Given an array A of integers and another number K. Find all the unique quadruple from the given array that sums up to K.

Also note that all the quadruples which you return should be internally sorted, ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 <= q2 <= q3 <= q4.

Example 1:

Input:
N = 5, K = 3
A[] = {0,0,2,1,1}
Output: 0 0 1 2 
Explanation: Sum of 0, 0, 1, 2 is equal
to K.
Example 2:

Input:
N = 7, K = 23
A[] = {10,2,3,4,5,7,8}
Output: 2 3 8 10 
        2 4 7 10 
        3 5 7 8 
Explanation: Sum of 2, 3, 8, 10 = 23,
sum of 2, 4, 7, 10 = 23 and sum of 3,
5, 7, 8 = 23.

vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>> st;
        
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int m=j+1;m<arr.size();m++)
                {
                  for(int l=m+1;l<arr.size();l++)
                  {
                     int sum=arr[i]+arr[j];
                     sum+=arr[m];
                     sum+=arr[l];
                     
                     if(sum==k)
                     {
                         vector<int> temp={arr[i],arr[j],arr[m],arr[l]};
                         sort(temp.begin(),temp.end());
                         st.insert(temp);
                     }
                         
                  }
                }
                
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
