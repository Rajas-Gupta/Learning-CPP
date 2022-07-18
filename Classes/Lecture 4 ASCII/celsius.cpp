#include <iostream>
using namespace std;
int main()
{
    int n,s,fi,f;
    cin>>n>>s>>fi;
    float c;
    while (n<=fi)
    {
        f=n;
        c=(5.0/9.0)*(f-32);
        n+=s;
        cout<<f<<" "<<c<<endl;
    }
    return 0;
}