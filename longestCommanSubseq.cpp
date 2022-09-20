#include<iostream>
using namespace std;
int findLongestCsubq (string s, string t, int i, int j)
{
    //baseCase
   if (i == s.length())
   {
    return 0;
   } 
   if(j == t.length())
   {
    return 0;
   }
    
    //matched case
    int ans = 0;
    if(s[i] == t[j])
    {
       ans = 1 + findLongestCsubq(s,t,i+1,j+1);
    }
    else
    {
        ans = max(findLongestCsubq(s,t,i,j+1),findLongestCsubq(s,t,i+1,j));
    }
    return ans;
}
int main()
{
   string s = "abcde";
   string t = "bcde";
   int i = 0;
   int j = 0;
   int res = findLongestCsubq(s,t,i,j);
   cout << "longest comman subsequence is "<<res;
}