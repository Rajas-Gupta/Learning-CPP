#include <iostream>
using namespace std;
int main()
{
    float n,i=0,inc=1;
    cin>>n;
    int c=1;
    while (c<=3)
    {
    while (i*i<=n)
    {
        i=i+inc;
    }
    i=i-inc;
    inc=inc/10;
    c++;
    }
    cout<<i;
    return 0;
}