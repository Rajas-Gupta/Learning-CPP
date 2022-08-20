#include <iostream>
using namespace std;
string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void intostr(int num){
    if(num==0){
        return;
    }
    int r=num%10;
    cout<<s[r]<<" ";
    intostr(num/10);
}
int main()
{
    int num;
    cin>>num;
    int n=num,i=1;
    intostr(num);
    return 0;
}