#include <iostream>
using namespace std;
int WineProblem(int * Wine,int l,int r,int day){
    if(l>r){
        return 0;
    }
    int op1=Wine[l]*day+WineProblem(Wine,l+1,r,day+1);
    int op2=Wine[r]*day+WineProblem(Wine,l,r-1,day+1);
    return max(op1,op2);
}

int WineProblemTopDown(int * Wine,int l,int r,int day,int dp[][100]){
    if(l>r){
        return dp[l][r]=0;
    }
    if (dp[l][r]!=-1)
    {
        return dp[l][r];
    }
    
    int op1=Wine[l]*day+WineProblem(Wine,l+1,r,day+1);
    int op2=Wine[r]*day+WineProblem(Wine,l,r-1,day+1);
    return dp[l][r]=max(op1,op2);
}
int main()
{
    int Wine[]={2,3,5,1,4};
    int n=sizeof(Wine)/sizeof(int);
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<WineProblem(Wine,0,n-1,1)<<endl;
    cout<<WineProblemTopDown(Wine,0,n-1,1,dp)<<endl;
    return 0;
}