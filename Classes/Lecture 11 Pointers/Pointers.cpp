#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int a=10;
    float f=1.11;
    char ch='A';
    int * ap=&a;
    float * fp=&f;
    char * cp=&ch;
    cout<<"Address Of a: "<<ap<<endl;
    cout<<"Address Of f: "<<fp<<endl;
    cout<<"Address Of c: "<<(int *)cp<<endl;
    cout<<"Address Of arr: "<<&arr<<endl;
    return 0;
}