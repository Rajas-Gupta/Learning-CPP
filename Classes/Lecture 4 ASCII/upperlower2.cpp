#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if (ch>='A' and ch<= 'Z')
    {
        cout<<"Upper Case";
    }
    else if (ch>='a' and ch<='z')
    {
        cout<<"Lower Case";
    }
    else
    {
        cout<<"Wrong Attempt";
    }
    
    return 0;
}