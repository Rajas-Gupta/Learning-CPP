#include <iostream>
using namespace std;
int BinarySearch(int arr[],int s,int e,int key){
    while (s<e)
    {
        int m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else{
            if(arr[m]<key){
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,4,6,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int ans=BinarySearch(arr,0,n,key);
    if (ans>=0)
    {
        cout<<"Key Found At: "<<ans<<endl;
    }
    else{
        cout<<"Key Not Found."<<endl;
    }
    return 0;
}