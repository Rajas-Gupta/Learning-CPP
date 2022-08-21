#include <iostream>
using namespace std;
int last7(int *a,int n,int i){
    if (i==n)
    {
        return -1;
    }
    
    if (a[i]==7)
    {
        int ni=last7(a,n,i+1);
        return max(i,ni);
    }
    else
    {
        return last7(a,n,i+1);
    }
    
}
int main()
{
    int a[]={1,2,3,7,6,7,5,8};
    int n=sizeof(a)/sizeof(int);
    cout<<last7(a,n,0);
    return 0;
}