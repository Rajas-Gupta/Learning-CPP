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
bool isPalidrome(char *a){
    int i=0,j=Length(a)-1;
    while (i<j)
    {
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char a[]="MADAM";
    if(isPalidrome(a)){
        cout<<"Palindrome Hai"<<endl;
    }
    else{
        cout<<"Palindrome Nhi Hai";
    }
    return 0;
}