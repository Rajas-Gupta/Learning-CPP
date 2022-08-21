#include <iostream>
using namespace std;
int BinarySearch(int *a,int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if (a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]<key){
        return BinarySearch(a,mid+1,e,key);
    }
    else{
        return BinarySearch(a,s,mid-1,key);
    }
}
int main()
{
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    cout<<BinarySearch(a,0,n-1,3)<<endl;   
    return 0;
}