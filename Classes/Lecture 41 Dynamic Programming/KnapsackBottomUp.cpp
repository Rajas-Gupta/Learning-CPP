#include <iostream>
using namespace std;
int bottomUp(int * price,int * wt,int N,int capacity){
    int dp[100][100]={0};
    for (int n = 1; n <= N; n++)
    {
        for (int cap = 1; cap <= capacity; cap++)
        {
            int op1,op2;
            op1=op2=INT_MIN;
            if (cap>=wt[n-1])
            {
                op1=price[n-1]+dp[n-1][cap-wt[n-1]];
            }
            op2=0+dp[n-1][cap];
            dp[n][cap]=max(op1,op2);
        }
    }
    for (int n = 1; n <= N; n++)
    {
        for (int cap = 1; cap <= capacity; cap++)
        {
            cout<<dp[n][cap]<<" ";
        }
        cout<<endl;
    }
    return dp[N][capacity];
}
int main()
{
    int price[]={5,6,8,3};
    int wt[]={6,3,4,2};
    int capacity=8;
    cout<<bottomUp(price,wt,4,capacity);
    return 0;
}