#include <iostream>
using namespace std;
int fiborec(int n){ // O(2^n)
    if (n<=1)
    {
        return n;
    }
    return fiborec(n-1)+fiborec(n-2);
}
int fibodp(int n,int *dp){ //O(n)
    if (n<=1)
    {
        dp[n]=n;
        return n;
    }
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    int ans= fibodp(n-1,dp)+fibodp(n-2,dp);
    dp[n]=ans;
    return ans;
}
void bottomUp(int n){
    int * dp=new int[n+1];
    dp[0]=0;
    dp[1]=1;
    for (int i = 2; i <= n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<dp[i]<<" ";
    }
}
int main()
{
    int dp[10000];
    for (int i = 0; i < 10000; i++)
    {
        dp[i]=-1;
    }
    cout<< fibodp(10,dp);
    cout<<endl;
    bottomUp(15);
    return 0;
}