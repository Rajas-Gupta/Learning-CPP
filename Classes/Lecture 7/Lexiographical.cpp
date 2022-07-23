#include <iostream>
using namespace std;

int main()
{
    int x=0,y=0;
    char ch;
    ch=cin.get();
    while(ch != '\n'){
        if (ch=='N')
        {
            y++;
        }
        else if (ch=='S')
        {
            y--;
        }
        else if (ch=='W')
        {
            x--;
        }
        else if(ch=='E')
        {
            x++;
        }
        ch=cin.get();
    }
    if (x>0 and y>0)
    {
        for(int i=0;i<x;i++){
            cout<<'E';
        }
        for(int i=0;i<y;i++){
            cout<<'N';
        }
    }
    else if(x<0 and y>0){
        for(int i=0;i<y;i++){
            cout<<'N';
        }
        for(int i=0;i<abs(x);i++){
            cout<<'W';
        }
    }
    else if(x<0 and y<0){
        for(int i=0;i<y;i++){
            cout<<'S';
        }
        for(int i=0;i<abs(x);i++){
            cout<<'W';
        }
    }
    else{
        for(int i=0;i<x;i++){
            cout<<'E';
        }
        for(int i=0;i<abs(y);i++){
            cout<<'S';
        }
    }
    return 0;
}