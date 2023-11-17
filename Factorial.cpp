Given a positive integer, N. Find the factorial of N.
 

Example 1:

Input:
N = 5
Output:
120
Explanation:
5*4*3*2*1 = 120
Example 2:

Input:
N = 4
Output:
24
Explanation:
4*3*2*1 = 24

Solution:
long long int factorial(int N){
        //code here
        long long int pro=1;
        for(int i=2;i<=N;i++)
        {
            pro=pro*i;
        }
        return pro;
    }
