Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.

Note: If the element is not present in the array return {-1,-1} as pair.

 

Example 1:

Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
X = 5
Output:
2 5
Explanation:
Index of first occurrence of 5 is 2
and index of last occurrence of 5 is 5.
Example 2:

Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 7, 123, 125}
X = 7
Output:
6 6

  Solution:

pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<int,int> ans;
        ans.first=-1,ans.second=-1;
        int i=0,j=v.size()-1;
        while(i<=j)
        {   
            int mid=i+(j-i)/2;
            if(v[mid]==x)
             {
                 ans.first=mid;
                 j=mid-1;
             }
            else if(v[mid]>x)
               j=mid-1;
            else
             i=mid+1;
        }
        i=0,j=v.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(v[mid]==x)
            {
                ans.second=mid;
                i=mid+1;
            }
            else if(v[mid]>x)
              j=mid-1;
             else
             i=mid+1;
        }
        return ans;
    }
