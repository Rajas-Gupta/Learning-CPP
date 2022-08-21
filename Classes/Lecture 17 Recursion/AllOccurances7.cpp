#include <iostream>
using namespace std;
void alloccurances(int *a,int n,int i){
    if(i==n){
        return ;
    }
    if (a[i]==7)
    {
        cout<<i<<" ";
    }
    alloccurances(a,n,i+1);
}
int main()
{
    int a[]={1,2,3,7,6,7,5,8};
    int n=sizeof(a)/sizeof(int);
    alloccurances(a,n,0);
    return 0;
    return 0;
}