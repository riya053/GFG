Given a sorted array of size N and an integer K, find the position(0-based indexing) at which K is present in the array using binary search.

Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.


  class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int begin=0,end=n-1;
        int mid;
        
        while(begin<=end)
        {
            int mid=(begin+end)/2;
            if(arr[mid]==k)
            {
                return mid;
                
            }
            else if(arr[mid]<k)
            {
                begin=mid+1;
            }
            else if(arr[mid]>k)
            {
                end=mid-1;
            }
        }
        return -1;
        
    }
};
