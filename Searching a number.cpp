Given an array Arr of N elements and a integer K. Your task is to return the position of first occurence of K in the given array.
Note: Position of first element is considered as 1.

Example 1:

Input:
N = 5, K = 16
Arr[] = {9, 7, 2, 16, 4}
Output: 4
Explanation: K = 16 is found in the
given array at position 4.
Example 2:

Input:
N = 7, K = 98
Arr[] = {1, 22, 57, 47, 34, 18, 66}
Output: -1
Explanation: K = 98 isn't found in
the given array.

output:

int search(int arr[], int n, int k) {
	    // code here
	    int pos;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==k)
	         {
	             pos=i+1;;
	             return pos;
	             break;
	         }
	    }
	    return -1;
	    
	}
