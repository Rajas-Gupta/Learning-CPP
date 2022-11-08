// LongestNonRepeatingChar.cpp
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int n=s.length();
        int i=0,j=0,ans=0;
        while (j<n)
        {
            char ch=s[j];
            int indx=ch;
            freq[ch]++;
            //Window Shrink
            while (freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};