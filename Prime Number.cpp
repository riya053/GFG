For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
 

Example 1:

Input:
N = 5
Output:
1
Explanation:
5 has 2 factors 1 and 5 only.
Example 2:

Input:
N = 25
Output:
0
Explanation:
25 has 3 factors 1, 5, 25

  Solution:

  int isPrime(int N){
        // code here
        if(N==1)
          return 0;
        if(N==2||N==3)
            return 1;
        if(N%2==0||N%3==0)
          return 0;
        
        for(int i=5;i*i<=N;i+=6)
        {
            if(N%i==0||N%(i+2)==0)
              return 0;
        }
        return 1;
    }
