#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        int prev_t=1;
        cout<<prev_t<<" ";
        for (int j = 1; j <=i; j++)
        {
            int nxt_t=((prev_t*(i-j+1))/j);//Permutation And Combinations Waala Concept ncr=nc(r-1)*((n-r+1)/r)
            cout<<nxt_t<<" ";
            prev_t=nxt_t;
        }
        cout<<endl;
    }

    return 0;
}