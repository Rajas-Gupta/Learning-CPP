#include <iostream>
using namespace std;

int main()
{
    int no1=10,no2=150;
    int ans;
    int i=2;
    int chotanumber;
    if(no1>no2){
        chotanumber=no2;
    }
    else
    {
        chotanumber=no1;
    }
    bool kyaGCDmila=false;
    i=2;
    while (i<=chotanumber)
    {
        if (no1%i==0 and no2%i==0)
        {
            ans=i;
            kyaGCDmila=true;
        }
        i++;
    }
    int lcm=(no1*no2)/ans;
    if (kyaGCDmila)
    {
        cout<<ans;
    }
    else
    {
        cout<<1;
    }
    
    return 0;
}