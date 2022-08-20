#include <iostream>
using namespace std;
int firstindex(int *a,int n){
    if (n==0)
    {
        return -1;
    }
    if (a[0]==7)
    {
        return 0;
    }
    int ans=firstindex(a+1,n-1);
    if (ans==-1){
        return -1;
    }
    return ans+1;
}
int pehla7(int * a,int n,int i=0){
    if(i==n){
        return -1;
    }
    if (a[i]==7)
    {
        return i;
    }
    return pehla7(a,n,i+1);
}
int main()
{
    int a[]={1,2,3,6,5,8};
    int n=sizeof(a)/sizeof(int);
    int num=7;
    cout<<firstindex(a,n)<<endl;
    cout<<pehla7(a,n)<<endl;
    return 0;
}