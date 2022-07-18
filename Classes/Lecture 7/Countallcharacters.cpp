#include <iostream>
using namespace std;

int main()
{
    int alpha,digits,special,spaces;
    alpha=digits=special=spaces=0;
    char ch;
    ch=cin.get();
    while (ch!='$')
    {
        if (ch>='0' and ch<='9')
        {
            digits++;
        }
        else if(ch==' ' || ch=='\n' || ch=='\t'){
            spaces++;
        }
        else if((ch>='a' and ch<='z') || (ch>='A' and ch<='Z')){
            alpha++;
        }
        else{
            special++;
        }
        ch=cin.get();
    }
    cout<<"Aplhabets: "<<alpha<<endl;
        cout<<"Special Character: "<<special<<endl;
        cout<<"Numeric Character: "<<digits<<endl;
        cout<<"White Spaces: "<<spaces<<endl;
    return 0;
}