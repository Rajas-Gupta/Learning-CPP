#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int a=10;
    float f=1.11;
    char ch='A';
    cout<<"Address Of a: "<<&a<<endl;
    cout<<"Address Of f: "<<&f<<endl;
    cout<<"Address Of c: "<<&ch<<endl;
    cout<<"Address Of arr: "<<&arr<<endl;
    return 0;
}