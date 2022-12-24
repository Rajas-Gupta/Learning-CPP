#include <set>
#include <iostream>
using namespace std;

// Properties Of Set
// 1. Duplicacy Is not allowed.
// 2. Data will automatically sorted.
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(6);
    cout<<"Ouput ";
    //Printing
    for(auto c:s){
        cout<<c<<" ";
    }
    //Find Or Search
    cout<<endl;
    auto address=s.find(5);
    if (address != s.end()){
        cout<<"Found : "<<*address;
    }
    else{
        cout<<"Not Found";
    }
    

    // Deletion In Set
    cout<<endl;
    while (!s.empty())
    {
        cout<<*s.begin()<<" ";
        s.erase(s.begin());
    }
    
    return 0;
}