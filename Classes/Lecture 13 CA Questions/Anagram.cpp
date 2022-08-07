#include <iostream>
using namespace std;
bool isPermutation(char *a,char *b){
    //Print Small abcd just for Refernce
    char ch='a';
    while (ch<='z')
    {
        cout<<ch<<" ";
        ch=ch+1;
    }
    cout<<endl;
    int freq[26]={0};
    for (int i = 0;a[i]!='\0'; i++)
    {
        char ch=a[i];
        int indx=ch-'a';
        freq[indx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    for (int i = 0;b[i]!='\0'; i++)
    {
        char ch=b[i];
        int indx=ch-'a';
        freq[indx]--;
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char a[]="aabcd";
    char b[]="bacad";
    if (isPermutation(a,b))
    {
        cout<<"Permutation Hai"<<endl;
    }
    else{
        cout<<"Permutation Nhi Hai"<<endl;
    }
    return 0;
}