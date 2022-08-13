#include <iostream>
using namespace std;

int main()
{
    string s,s1;
    s="hello world";
    cout<<s<<endl;
    s1="learning strings";
    if(s>s1){
        cout<<s<<" is greater than "<<s1<<endl;
    }
    else if (s<s1)
    {
        cout<<s<<" is less than "<<s1<<endl;
    }
    else
    {
        cout<<s<<" equals"<<s1<<endl;
    }
    s+=s1;
    cout<<s<<endl;

    /*
    cout<<s1<<endl;
    cout<<"Enter s:";
    cin>>s; //cin ignores whitespaces
    cout<<s<<endl;

    cin.ignore();
    cout<<Enter s:";
    getline(cin,s,'$'); //To Take WhiteSpace Input
    cout<<s<<endl;
    */

    return 0;
}