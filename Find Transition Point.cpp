Given a sorted array containing only 0s and 1s, find the transition point. 


Example 1:

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.

Example 2:

Input:
N = 4
arr[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",
the answer is -1.

  solution:

int transitionPoint(int arr[], int n) {
    // code here
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
        {
            low=mid+1;
        }
        else if(arr[mid]==1)
        {
            if(mid==0||(arr[mid]==1&&arr[mid-1]==0))
             return mid;
             high=mid-1;
        }
    }
    return -1;
       
}
