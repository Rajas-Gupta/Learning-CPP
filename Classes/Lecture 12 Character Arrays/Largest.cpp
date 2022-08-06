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
void Copy(char * a,char * b,int len){
    for (int i = 0; i <= len; i++)
    {
        a[i]=b[i];
    }
}
int main()
{
    char a[100];
    int large_len=0;
    char largest[1000];
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a,100);
        int lena=Length(a);
        if(lena>large_len){
            large_len=lena;
            Copy(largest,a,large_len);
        }
    }
    cout<<"Largest String: "<<largest;
    return 0;
}