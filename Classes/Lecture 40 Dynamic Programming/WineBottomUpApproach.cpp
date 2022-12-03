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
int bottomUp(int * wine,int n){
    int dp[100][100]={0};
    for(int l=n-1;l>=0;l--){
        for(int r=l;r<n;r++){
            int currentday=n-(r-l);
            if(l==r){
                dp[l][r]=currentday*wine[l];
            }
            else{
                dp[l][r]=max(currentday*wine[l]+dp[l+1][r],currentday*wine[r]+dp[l][r-1]);
            }
        }
    }
    for (int l = 0; l < n; l++)
    {
        for (int r = 0; r <n ; r++)
        {
            cout<<dp[l][r]<<" ";
        }
        cout<<endl;
    }
    return -1;
}
int main()
{
    int Wine[]={2,3,5,1,4};
    int n=sizeof(Wine)/sizeof(int);
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<WineProblem(Wine,0,n-1,1)<<endl;
    bottomUp(Wine,n);
    return 0;
}