#include <set>
#include <iostream>
using namespace std;

int main()
{
    set<pair<int,int> >s;
    s.insert(make_pair(4,2));
    s.insert(make_pair(6,1));
    s.insert(make_pair(3,20));
    s.insert(make_pair(2,12));
    s.insert(make_pair(1,9));
    while (!s.empty())
    {
        auto address=s.begin();
        auto p = * address;
        s.erase(s.begin());
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}