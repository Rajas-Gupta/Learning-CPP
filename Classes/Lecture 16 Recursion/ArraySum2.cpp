//n denotes no. of elements not indexes
#include <iostream>
using namespace std;
int SumOfArray(int *a,int n,int i=0){
    if(i==n){
        return 0;
    }
    return a[i]+SumOfArray(a,n,i+1);
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<SumOfArray(a,n);
    return 0;
}