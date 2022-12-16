#include <unordered_map>
#include <list>
#include <iostream>
using namespace std;
class Graph{
    public:
    unordered_map<string,list<string> >adj;
    void addEdge(string u,string v,bool bidr=true){
        adj[u].push_back(v);
        if (bidr)
        {
            adj[v].push_back(u);
        }
    }
    void print(){
        for(auto p:adj){
            cout<<p.first<<"-->";
            for (auto neighbour : p.second)
            {
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge("a","b");
    g.addEdge("c","b");
    g.addEdge("d","a");
    g.addEdge("d","e");
    g.addEdge("a","e");
    g.print();
    return 0;
}