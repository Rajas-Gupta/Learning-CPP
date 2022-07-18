#include <iostream>
using namespace std;

int main()
{
    int n=65;
    char ch;
    while (n<=90)
    {
        ch=n;
        cout<<ch<<" "<<n<<endl;
        n++;
    }
    cout<<endl;
    n=97;
    while (n<=122)
    {
        ch=n;
        cout<<ch<<" "<<n<<endl;
        n++;
    }
    return 0;
}