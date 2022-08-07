#include <iostream>
using namespace std;
void Substring(char * a){
    for (int i = 0; a[i]!='\0' ; i++)
    {
        int j=i;
        while(a[j]!='\0')
        {
            for (int k = i; k <=j; k++)
            {
                cout<<a[k];
            }
            cout<<endl;
            j++;
        }
    }
}
int main()
{
    char a[]="abc";
    Substring(a);
    return 0;
}