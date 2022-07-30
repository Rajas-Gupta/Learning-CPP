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
int main()
{
    int n;
    cin>>n;
    if(CheckPrime(n)){
        cout<<"Number Is Prime.";
    }
    else{
        cout<<"Number Is Not Prime.";
    }
    return 0;
}