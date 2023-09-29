Print first n Fibonacci Numbers

Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5
Example 2:

Input:
N = 7
Output: 1 1 2 3 5 8 13

  Solution:

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {   
        vector<long long> f(n);
        f[0]=f[1]=1;
        for(int i=2;i<n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        return f;
    }
};
