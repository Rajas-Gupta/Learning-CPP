#include <iostream>
using namespace std;
void PrintArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a+i<<"  ";
        cout<<*(a+i)<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    PrintArray(arr,n);
    return 0;
}