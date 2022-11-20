#include <iostream>
using namespace std;
int MinStepsTo1(int n){
    if(n==1){
        return 0;
    }
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    op1=MinStepsTo1(n-1);
    if (n%2==0)
    {
        op2=MinStepsTo1(n/2);
    }
    if (n%3==0)
    {
        op3=MinStepsTo1(n/3);
    }
    return min(op1,min(op2,op3))+1;
}
int topDown(int n,int * dp){
    if(n==1){
        return dp[n]=0;
    }
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    op1=topDown(n-1,dp);
    if (n%2==0)
    {
        op2=topDown(n/2,dp);
    }
    if (n%3==0)
    {
        op3=topDown(n/3,dp);
    }
    int ans = min(op1,min(op2,op3))+1;
    dp[n]=ans;
    return ans;
}
int bottomUp(int n){
    int * dp=new int[n+1];
    dp[1]=0;
    for (int i = 2; i <=n; i++)
    {
        int op1,op2,op3;
        op1=op2=op3=INT_MAX;
        op1=dp[i-1];
        if (i%2==0)
        {
            op2=dp[i/2];
        }
        if (i%3==0)
        {
            op3=dp[i/3];
        }
        dp[i]=min(op1,min(op2,op3))+1;
    }
    return dp[n];
}
int main()
{
    cout<<MinStepsTo1(10);
    cout<<endl;
    int n;
    cin>>n;
    int dp[100000];
    for (int i = 0; i < 100000; i++)
    {
        dp[i]=-1;
    }
    cout<<topDown(n,dp);
    cout<<endl<<bottomUp(n);
    return 0;
}