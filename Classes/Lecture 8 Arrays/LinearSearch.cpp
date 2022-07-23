#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    bool keymilli=false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key){
            cout<<"Key Found at: "<<i<<endl;
            keymilli=true;
        }
    }
    if (keymilli==false)
    {
        cout<<"Key Not Found"<<endl;
    }
    return 0;
}