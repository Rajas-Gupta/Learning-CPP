#include <iostream>
#include <cstring>
#include <algorithm>
//By Default Tim Sort
using namespace std;
bool meracompare(int a,int b){
    cout<<"Comparing: "<<a<<", "<<b<<endl;
    return a<b;
}
int main()
{
    int a[]={5,4,6,7,2};
    int n=sizeof(a)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+n,meracompare);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}