#include <iostream>

using namespace std;

int main()
{
    // syntax:
    // condition ? work 1: work 2;//Condition : true (work 1), false(work 2)

    int a = -10;
    bool b;
    a>0 ? cout<<"Hello"<<endl:cout<<"world"<<endl;

    b = ((a>0)? true : false);
    b== true ? cout<<" A is greater than zero"<<endl:cout<<"A is smaller than 0" ;

    return 0;
}