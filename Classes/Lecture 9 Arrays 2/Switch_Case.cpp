#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    switch(ch){
        case 'N':
        cout<<"North";
        break;
        case 'S':
        cout<<"south";
        break;
        case 'W':
        cout<<"West";
        break;
        case 'E':
        cout<<"East";
        break;
        default:
        cout<<"Galat direction";
    }

    return 0;
}