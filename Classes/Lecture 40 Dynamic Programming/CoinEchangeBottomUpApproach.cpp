#include <iostream>
#include <vector>
using namespace std;

void bottomUp(int * deno,int n,int amt){
    vector<int>dp(amt+1,INT_MAX);
    dp[0]=0;
    for (int rupay = 1; rupay <=amt; rupay++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rupay>=deno[j])
            {
                int kamRupay=rupay-deno[j];
                dp[rupay]=min(dp[rupay],dp[kamRupay]+1);
            }
        }
    }
    for (int i = 1; i <= amt; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int deno[]={1,7,10};
    bottomUp(deno,3,15);
    return 0;
}