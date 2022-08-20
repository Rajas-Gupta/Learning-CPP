//n denotes no. of elements not indexes
#include <iostream>
using namespace std;
int SumOfArray(int *a,int n){
    if(n==0){
        return 0;
    }
    return a[0]+SumOfArray(a+1,n-1);
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<SumOfArray(a,n);
    return 0;
}