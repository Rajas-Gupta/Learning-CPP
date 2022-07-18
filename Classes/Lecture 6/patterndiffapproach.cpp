#include <iostream>
using namespace std;

int main()
{
    int n,no;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            no=0;
        }
        else
        {
            no=1;
        }
        for (int j = 0; j < i; j++)
        {
            cout<<no<<" ";
            no=1-no;
        }
        cout<<endl;
    }
    return 0;
}