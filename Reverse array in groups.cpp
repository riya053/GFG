Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
 

Example 2:

Input:
N = 4, K = 3
arr[] = {5,6,8,9}
Output: 8 6 5 9

  Solution:

void reverseInGroups(vector<long long>& arr, int n, int k){
        
        // code here
       for(int i=0;i<n;i+=k)
       {
           int left=i;
           int right=i+k-1;
           if(right>n-1) right=n-1;
           while(right>=left)
           {
               swap(arr[left],arr[right]);
               left++;
               right--;
           }
       }
    
        }
