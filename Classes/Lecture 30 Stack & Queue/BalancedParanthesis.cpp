#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParanthesis(char * a){
    stack <char>s;
    for (int i = 0; i!='\0'; i++)
    {
        char ch=a[i];
        switch (ch){
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')':
                if(s.empty() || s.top()!='('){
                    return false;
                }
                s.pop();
                break;
            case '}':
                if(s.empty() || s.top()!='{'){
                    return false;
                }
                s.pop();
                break;
            case ']':
                if(s.empty() || s.top()!='['){
                    return false;
                }
                s.pop();
                break;
        }  
    }
    if (s.empty()) return true;
    else return false;
    
}
int main()
{
    char a[]="{a+[b*(c+d)]*e}";
    if (isBalancedParanthesis(a))
    {
        cout<<"Balanced Hai"<<endl;
    }
    else{
        cout<<"Balanced Nhi Hai"<<endl;
    }
    return 0;
}