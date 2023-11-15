Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek build a star pattern.

 

Example 1:

Input: 5

Output:
* * * * *
* * * * 
* * * 
* *  
* 

  solution:
void printTriangle(int n) {
	    // code here
	    for(int i=n;i>0;i--)
	    {
	        for(int j=0;j<i;j++)
	        {
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
