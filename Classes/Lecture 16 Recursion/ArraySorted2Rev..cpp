//Reverse Se Check
#include <iostream>
using namespace std;
bool isArraySorted(int *a,int n){
    if (n<=1)
    {
        return true;
    }
    // Recursive Case
    bool kyachotasortedhai=isArraySorted(a,n-1);
    if(a[n-1]>=a[n-2] and kyachotasortedhai==true){
        return true;
    }
    return false;
}

int main()
{
    int a[]={1,2,5,4};
    int n=sizeof(a)/sizeof(int);
    if (isArraySorted(a,n))
    {
        cout<<"Array Is Sorted.";
    }
    else{
        cout<<"Array Is Not Sorted.";
    }
    return 0;
}