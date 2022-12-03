#include <iostream>
using namespace std;
int coinExchange(int amount,int * deno,int n,int * dp){
    if (amount==0)
    {
        return dp[amount]=0;
    }
    if (dp[amount]!=-1)
    {
        return dp[amount];
    }
    
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amount>=deno[i])
        {
            int chotiAmount=amount-deno[i];
            int chotiAmountCoins=coinExchange(chotiAmount,deno,n,dp);
            if (chotiAmountCoins!=INT_MAX)
            {
                ans=min(chotiAmountCoins+1,ans);
            }
        }
    }
    return dp[amount]=ans;
}
int main()
{
    int dp[100000];
    memset(dp,-1,sizeof dp);
    int deno[]={1,7,10};
    cout<<coinExchange(150,deno,3,dp);
    return 0;
}