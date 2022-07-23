#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,4,7,8,10};
    int n=sizeof(arr)/sizeof(int);
    int  largest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest=max(arr[i],largest);
    }
    cout<<"Largest:- "<<largest;
    return 0;
}