#include <iostream>
using namespace std;
void IfContains(int *a,int n,int num){
    if(n==0){
        cout<<"False";
        return;
    }
    if (a[0]==num)
    {
        cout<<"True";
        return;
    }
    IfContains(a+1,n-1,num);
}
int main()
{
    int a[]={1,2,3,7,6,7,5,8};
    int n=sizeof(a)/sizeof(int);
    int num=7;
    IfContains(a,n,num);
    return 0;
}