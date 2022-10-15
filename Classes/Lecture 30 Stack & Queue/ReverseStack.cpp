#include <iostream>
#include <stack>
using namespace std;
void push_bottom(stack<int>&s,int topElement){
    if(s.empty()){
        s.push(topElement);
        return;
    }
    // Recursive
    int top=s.top();
    s.pop();
    push_bottom(s,topElement);
    s.push(top);
}
void ReverseStack(stack<int>&s){
    if (s.empty())
    {
        return;
    }
    int topelement=s.top();
    s.pop();
    ReverseStack(s);
    push_bottom(s,topelement);
}
void printeStack(stack<int>s){
    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printeStack(s);
    ReverseStack(s);
    printeStack(s);
    return 0;
}