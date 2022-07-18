#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        //Print Row Time Stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        // Print Space
        cout<<" ";
        //Print n-row+1 Time Stars
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        //Print Space
        cout<<" ";
        // Print n-row+1 time stars
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        //Print " "
        cout<<" ";
        //Print Row Time Stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}