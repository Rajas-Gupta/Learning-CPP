#include <iostream>
using namespace std;
int coinExchange(int amount,int * deno,int n){
    if (amount==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amount>=deno[i])
        {
            int chotiAmount=amount-deno[i];
            int chotiAmountCoins=coinExchange(chotiAmount,deno,n);
            if (chotiAmountCoins!=INT_MAX)
            {
                ans=min(chotiAmountCoins+1,ans);
            }
        }
    }
    return ans;
}
int main()
{
    int deno[]={1,7,10};
    cout<<coinExchange(15,deno,3);
    return 0;
}