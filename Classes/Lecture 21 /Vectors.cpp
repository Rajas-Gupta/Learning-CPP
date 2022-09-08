#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Inserting: "<<i<<" : ";
        v.push_back(i);
        cout<<"Size: "<<v.size()<<", Capacity: "<<v.capacity()<<endl;
    }
    //Vector Initialisation
    //1st Way
    // vector<int> v1({1,2,3,4,5,6,7,8,9,10});
    //2nd Way
    // vector <int> v1={1,2,3,4,5,6,7,8,9,10};

    //3rd Way
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    vector<int> v1(a,a+n);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    
    return 0;
}