#include <iostream>
using namespace std;
void printinc(int n,int i=1){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    printinc(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    printinc(n);
    return 0;
}