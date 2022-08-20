//Front se
#include <iostream>
using namespace std;
bool isArraySorted(int *a,int n,int i){
    if (i>=n-1)
    {
        return true;
    }
    // Recursive Case
    bool kyachotasortedhai=isArraySorted(a,n,i+1);
    if(a[i]<=a[i+1] and kyachotasortedhai==true){
        return true;
    }
    return false;
}

int main()
{
    int a[]={1,2,5,4};
    int n=sizeof(a)/sizeof(int);
    if (isArraySorted(a,n,0))
    {
        cout<<"Array Is Sorted.";
    }
    else{
        cout<<"Array Is Not Sorted.";
    }
    return 0;
}