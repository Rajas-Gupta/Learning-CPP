#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int>h;
    //map<string, int>h; //Insertion, Detection: O(log N), AVL TREES
    //Output is Sorted
    //We Need To Insert a pair of key and value
    //1st Way
    pair<string,int>p;
    p.first="Cherry";
    p.second=10;
    h.insert(p);
    //2nd Way
    pair<string,int>p1("Peach",50);
    h.insert(p1);
    //3rd Way
    h.insert({"mango", 100});
	h.insert({"guava", 80});
	h.insert({"Papaya", 120});
	h.insert({"Kiwi", 20});
    //4th Way
    h.insert(make_pair("Strawberry",60));
    for (int i = 0; i < h.bucket_count(); i++)
    {
        cout<<i<<"-->";
        for (auto it = h.begin(i); it != h.end(i); it++)
        {
            cout<<"("<<it->first<<", "<<it->second<<")";
        }
        cout<<endl;
    }
    //2nd Way
    for(auto p:h){
        cout<<p.first<<", "<<p.second<<endl;
    }
    return 0;
}