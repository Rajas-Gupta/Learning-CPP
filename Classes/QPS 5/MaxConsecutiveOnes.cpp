// MaxConsecutiveOnes.cpp
// https://leetcode.com/problems/max-consecutive-ones-iii/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n,i,j,flips,ans;
        n=nums.size();
        i=j=flips=ans=0;
        while (j<n)
        {
            if (nums[j]==0)
            {
                flips++;
            }
            while (flips>k)
            {
                if (nums[i]==0)
                {
                    flips--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};