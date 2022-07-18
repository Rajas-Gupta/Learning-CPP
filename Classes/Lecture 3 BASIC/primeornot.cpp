#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
            cout<<"No. Is Not Prime"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"No. Is Prime";
    return 0;
}