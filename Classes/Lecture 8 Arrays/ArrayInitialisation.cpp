#include <iostream>
using namespace std;

int main()
{
    //1st Way
    int a[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //2nd Way
    int arr[]={6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}