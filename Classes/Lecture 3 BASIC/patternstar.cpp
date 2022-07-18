#include <iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int n=1;
    while (n<=row)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        n++;
    }
    return 0;
}