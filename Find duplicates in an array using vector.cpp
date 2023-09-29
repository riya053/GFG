Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

Note: The extra space is only for the array to be returned. Try and perform all operations within the provided array. 

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: 
-1
Explanation: 
There is no repeating element in the array. Therefore output is -1.
Example 2:

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 
2 3 
Explanation: 
2 and 3 occur more than once in the given array.

  solution:

vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1) continue;
            
            bool flag=false;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    flag=true;
                    arr[j]=-1;
                }
            }
            
            if(flag){
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(),ans.end());
        
        if(ans.size()==0)
           return {-1};
           
           
         return ans;
        
        
    }
