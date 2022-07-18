//To print the number that occurs odd time(1 time) given that other number occurs eventime(2 Times)
#include <iostream>
using namespace std;

int main()
{
    int n,no,ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        ans=ans^no;
    }
    cout<<ans;
    return 0;
}