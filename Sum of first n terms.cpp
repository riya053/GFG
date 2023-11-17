Given an integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.

Example 1:

Input:
N=5
Output:
225
Explanation:
13+23+33+43+53=225
Example 2:

Input:
N=7
Output:
784
Explanation:
13+23+33+43+53+63+73=784

Solution:

long long sumOfSeries(long long N) {
        // code here
        long long int sum=0;
        for(long long int i=1;i<=N;i++)
        {
            sum=sum+i*i*i;
        }
        return sum;
    }
