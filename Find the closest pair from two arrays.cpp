Given two sorted arrays arr and brr and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.
Note: Can return the two numbers in any manner.

Example 1:

Input : N = 4, M = 4
arr[ ] = {1, 4, 5, 7}
brr[ ] = {10, 20, 30, 40} 
X = 32
Output : 
1, 30
Explanation:
The closest pair whose sum is closest
to 32 is {1, 30} = 31.
Example 2:

Input : N = 4, M = 4
arr[ ] = {1, 4, 5, 7}
brr[ ] = {10, 20, 30, 40}
X = 50 
Output : 
7, 40 
Explanation: 
The closest pair whose sum is closest
to 50 is {7, 40} = 47.


Solution:

vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
       
    vector<int>res;
        int i = 0,j = m-1,sum = 0 ;
        int dif = INT_MAX;
        
        int a = 0;
           int b = 0;
        while(i<n && j>=0){
            sum = arr[i]+brr[j];
            
            if(abs(sum-x)<dif){
                dif = abs (sum-x);
                a = arr[i];
                b = brr [j];
            }
            
            if(sum>x){
                j--;
            }
            else
               i++;
        }
        res.push_back(a);
        res.push_back(b);
        
        return res;
    }
