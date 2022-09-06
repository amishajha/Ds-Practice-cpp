// Input: blocks = "WBWBBBW", k = 2
// Output: 0
// Explanation:
// No changes need to be made, since 2 consecutive black blocks already exist.
// Therefore, we return 0

#include<iostream>
using namespace std;

int minimumRecolors(string s, int k) 
    {
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            count+=(s[i]=='W');
        }
        ans=count;
        for(int i=k;i<s.size();i++)
        {
            count-=(s[i-k]=='W');
            count+=(s[i]=='W');
            ans=min(ans,count);
        }
        return ans;
    }