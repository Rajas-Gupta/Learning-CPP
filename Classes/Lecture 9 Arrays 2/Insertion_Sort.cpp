#include <iostream>
using namespace std;

int main()
{
    int j,arr[]={5,3,2,4,1};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int HPC=arr[i];
        for (j = i-1;j>=0; j--)
        {
            if (arr[j]>HPC)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=HPC;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}