#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> ans;
    bool isPalindrome(string &x){
        int i=0;
        int j=x.length()-1;
        while(i<j){
            if(x[i++]!=x[j--]) return false;
        }
        return true;
    }
    void solve(string &s,int i,vector<string>temp){
        if(i==s.length()){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.length();++j){

            string x=s.substr(i,j-i+1);
            if(isPalindrome(x)){
                temp.push_back(x);
                solve(s,j+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        solve(s,0,temp);
        return ans;
    }
};

int main()
{
    
    return 0;
}