#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[100]="tello",b[100]="procoder";
    // cin.getline(a,100);
    // cin.getline(b,100);

    //Inbuilt Functions
    cout<<strlen(a)<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    //strcat(a,b);  //a=a+b;

    // cout<<"a: "<<a<<endl;
    // cout<<"b: "<<b<<endl;

    //Compare Two Strings
    //cout<<strcmo(a,b)<<endl;
    if (strcmp(a,b)==0)
    {
        cout<<a<<" equals "<<b <<endl;
    }
    else if (strcmp(a,b)<0)
    {
        cout<<a<<" is less than "<<b <<endl;
    }
    else
    {
        cout<<a<<" is greater than "<<b <<endl;
    }
    // 1. if(a<b) o/p < 0
    // 2. if(a>b) o/p > 0
    // 3. if(a=b) o/p = 0
    return 0;
}