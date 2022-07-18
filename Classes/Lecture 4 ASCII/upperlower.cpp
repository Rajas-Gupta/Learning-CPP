#include <iostream>
using namespace std;

int main()
{
    char n;
    cin>>n;
    int x=n;
    if (x>=65 and x<=90)
    {
        cout<<"Upper";
    }
    else
    {
        cout<<"Lower";
    }
    return 0;
}