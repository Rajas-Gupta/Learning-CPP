#include <iostream>
using namespace std;

int main()
{
    char ch;
    int cnt=0;
    //To read Whitespace Character
    //We Use
    //Char ch;
    //Ch=cin.get()
    //instead of cin>>ch;
    ch=cin.get();
    while (ch!='$')
    {
        cnt++;
        ch=cin.get();
    }
    cout<<"Number Of Characters: "<<cnt<<endl;
    return 0;
}