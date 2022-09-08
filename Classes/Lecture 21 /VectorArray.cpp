#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<v.capacity()<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v1(n,10);
    for (int i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}