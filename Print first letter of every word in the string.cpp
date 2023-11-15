Given a string S, the task is to create a string with the first letter of every word in the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg

Example 2:

Input: 
S = "bad is good"
Output: big


Solution:

	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string temp="";
	    temp+=S[0];
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]==' ')
	         temp+=S[i+1];
	    }
	    return temp;
	   
	}
