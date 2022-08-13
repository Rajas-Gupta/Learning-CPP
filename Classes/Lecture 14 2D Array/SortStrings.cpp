#include <iostream>
#include <cstring>
#include <algorithm>
//By Default Tim Sort
using namespace std;
bool meracompare(string a,string b){
    // cout<<"Comparing: "<<a<<", "<<b<<endl;
    if (a.length()==b.length())
    {
        return a<b;
    }
    
    return a.length()<b.length();
}
int main()
{
    string s[100]={"pineapple","apple","fivi","tivi","kiwi","papaya","mango"};
    int n=6;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    sort(s,s+n,meracompare);
    cout<<endl<<"After Sorting:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // int a[]={5,4,6,7,2};
    // int n=sizeof(a)/sizeof(int);

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // sort(a,a+n,meracompare);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    return 0;
}