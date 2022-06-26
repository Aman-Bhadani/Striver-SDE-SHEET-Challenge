class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        int maxLen=0;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(r<n)
        {
           if(mp.find(s[r])==mp.end())
           {
               maxLen=max(maxLen,r-l+1);
               mp[s[r]]=r;
               r++;
           }
           else
            { 
               int lastIndex=mp[s[r]];
               if(lastIndex>=l)
               {
                   l=lastIndex+1;
                   maxLen=max(maxLen,r-l+1);
                   mp[s[r]]=r;
                   r++;
               }
               else
               {
                   maxLen=max(maxLen,r-l+1);
                   mp[s[r]]=r;
                   r++;
               } 
            } 
        }
        return maxLen;
    }
};