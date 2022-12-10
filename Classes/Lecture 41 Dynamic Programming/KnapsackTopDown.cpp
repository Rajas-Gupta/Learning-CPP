#include <iostream>
#include <cstring>
using namespace std;

int topDown(int * price,int * wt,int capacity,int n,int dp[][100]){
    if(capacity == 0 || n ==0){
        return dp[n][capacity]=0;
    }
    if (dp[n][capacity]!=-1)
    {
        return dp[n][capacity];
    }
    
    int op1,op2;
    op1=op2=INT_MIN;
    if (capacity>=wt[n-1])
    {
        op1=price[n-1]+topDown(price,wt,capacity-wt[n-1],n-1,dp);
    }
    op2=topDown(price,wt,capacity,n-1,dp);
    return dp[n][capacity]=max(op1,op2);
}
int main()
{
    int price[]={7,4,4};
    int wt[]={3,2,2};
    int capacity=4;
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<topDown(price,wt,capacity,3,dp)<<endl;
    return 0;
    return 0;
}