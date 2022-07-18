#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,i,no,large=INT_MIN;
    cin>>n;
    i=1;
    while (i<=n)
    {
        cout<<"Enter No.:-";
        cin>>no;
        if (no>large)
        {
            large=no;
        }
        i++;
    }
    cout<<"Largest No:-"<<large;
    return 0;
}