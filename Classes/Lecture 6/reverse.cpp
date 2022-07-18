#include <iostream>
using namespace std;

int main()
{
    int n,r,no=0;
    cin>>n;
    while (n){
        r=n%10;
        no=no*10+r;
        n=n/10;
    }
    cout<<no;
    return 0;
}
 