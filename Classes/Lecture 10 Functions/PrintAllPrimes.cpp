#include <iostream>
using namespace std;
bool CheckPrime(int n){
    for (int i = 2; i <n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void PrintAllPrime(int n){
    for(int i=2;i<=n;i++){
        if(CheckPrime(i)){
        cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    PrintAllPrime(n);
    return 0;
}