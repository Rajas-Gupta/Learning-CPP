#include <iostream>
using namespace std;
int bottomUp(string &s1,string &s2){
    int dp[100][100]={0};
    int n=s1.length();
    int m=s1.length();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    int k=dp[n][m];
    char a[100];
    a[k--]='\0';
    int i=n,j=m;
    while (k>=0)
    {
        if (s1[i-1]==s2[j-1])
        {
            a[k]=s1[i-1];
            k--;
            i--;
            j--;
        }
        else{
            if (dp[i-1][j]>=dp[i][j-1])
            {
                i--;
            }
            else{
                j--;
            }
        }
    }
    cout<<a<<endl;
    return dp[n][m];
}
int main()
{
    string s1="codinggop";
    string s2="codingo";
    int dp;
    dp=bottomUp(s1,s2);
    return 0;
}