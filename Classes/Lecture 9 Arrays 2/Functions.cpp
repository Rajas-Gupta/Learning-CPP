#include <iostream>
using namespace std;
// Syntax:
// data_type function_name(arguements){
// Work
// }
void HelloWorld(){   //Function Declaration
    cout<<"Hello World"<<endl; //Function Definition
}
void addition(int a,int b){
    cout<<a+b<<endl;
}
int add(int a,int b){
    return a+b;
}
int main()
{
    HelloWorld(); //Invoking Or Calling
    int a=10,b=30;
    addition(a,b);
    int c=add(a,b);
    cout<<c<<endl;
    return 0;
}