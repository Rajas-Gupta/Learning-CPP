#include <iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for (int i = 2; i <= n; i++)
    {
        ans*=i;
    }
    return ans;
}
int ncr(int n,int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}