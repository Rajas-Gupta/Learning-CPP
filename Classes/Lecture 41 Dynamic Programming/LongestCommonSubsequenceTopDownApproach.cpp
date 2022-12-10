#include <iostream>
using namespace std;
int topDown(string &s1,string &s2,int n,int m,int dp[][100]){
    //Base Case
    if(n==0 || m==0){
        return dp[n][m]=0;
    }
    if (dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    //Recursive Case
    if (s1[n-1]==s2[m-1])
    {
        return dp[n][m]=1+topDown(s1,s2,n-1,m-1,dp);
    }
    else{
        return dp[n][m]=max(topDown(s1,s2,n-1,m,dp),topDown(s1,s2,n,m-1,dp));
    }
}
int main()
{
    string s1="codinggop";
    string s2="codingo";
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<topDown(s1,s2,s1.length(),s2.length(),dp)<<endl;
    return 0;
}