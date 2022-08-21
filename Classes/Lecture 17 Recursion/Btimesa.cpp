#include <iostream>
using namespace std;
int btimesa(int a,int b){
    if(b==0){
        return 0;
    }
    return a+btimesa(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<btimesa(a,b);
    return 0;
}