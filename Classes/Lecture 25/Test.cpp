#include <iostream>
using namespace std;
bool isPrime(int n){
    // BigO(sqrt(n))
    for (int i = 2; i * i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool isPrime2(int n){
    if (n !=2 and n%2==0) return false;
    for (int i = 3; i * i <= n; i+=2)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n=22;
    // cin>>n;
    // if (isPrime2(n))
    // {
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }
    for (int i = 2; i <=n; i++)
    {
        if (isPrime2(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}