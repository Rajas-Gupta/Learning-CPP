// https://leetcode.com/problems/next-greater-element-ii/description/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& que) {
        int n=que.size();
        vector<int>ans(n,INT_MIN);
        stack<int>s;
        s.push(0);
        for(int i=1;i<2*n;i++){
            while(!s.empty() and que[s.top()]<que[i%n]){
                ans[s.top()]=que[i%n];
                s.pop();
            }
            if(ans[i%n]==INT_MIN){
                s.push(i%n);
                }
        }
        while(!s.empty()){
            ans[s.top()]=-1;
            s.pop();
        }
        return ans;
    }
};