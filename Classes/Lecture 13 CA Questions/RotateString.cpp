#include <iostream>
using namespace std;
int Length(char *a){
    int cnt=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
void RotateString(char *a,int n){
    int lena=Length(a);
    for (int i = lena-1; i >=0; i--)
    {
        a[i+n]=a[i];
    }
    for (int i = lena,j=0; j < n;j++, i++)
    {
        a[j]=a[i];
    }
    a[lena]='\0';
}
int main()
{
    char a[100]="Coding";
    cout<<a<<endl;
    int n=3003;
    n=n%Length(a);
    RotateString(a,n);
    cout<<a<<endl;
    return 0;
}