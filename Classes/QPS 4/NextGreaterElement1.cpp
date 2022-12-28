//https://leetcode.com/problems/next-greater-element-i/description/
class Solution {
public:
    vector<int> nextGreater(vector<int> que){
        int n=que.size();
        vector<int>ans(n);
        stack<int>s;
        s.push(0);
        for(int i=1;i<que.size();i++){
            while(!s.empty() and que[s.top()]<que[i]){
                ans[s.top()]=que[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ans[s.top()]=-1;
            s.pop();
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>sol;
        ans=nextGreater(nums2);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    sol.push_back(ans[j]);
                }
            }
        }
        return sol;
    }
};