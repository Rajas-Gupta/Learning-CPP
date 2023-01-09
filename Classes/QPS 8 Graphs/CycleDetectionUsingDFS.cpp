#include <unordered_map>
#include <list>
#include <queue>
#include <iostream>
using namespace std;
template<typename T>
class Graph{
    public:
    // unordered_map<string,list<string> >adj;
    unordered_map<T,list<T> >adj;
    void addEdge(T u,T v,bool bidr=true){
        adj[u].push_back(v);
        if (bidr)
        {
            adj[v].push_back(u);
        }
    }
    bool isCycleDFS(T src,
    unordered_map<T,bool>&visited,
    unordered_map<T,T>&parent){
        visited[src]=true;
        for(auto ch: adj[src]){
            if(!visited[ch]){
                parent[ch]=src;
                bool iscyclic=isCycleDFS(ch,visited,parent);
                if(iscyclic){
                    return true;
                }
            }
            else {
                if(ch!=parent[src]){
                    return true;
                }
            }
        }
        return false;
    }
    bool cyclePresent(){   //For seeing into components
        unordered_map<T,bool>visited;
        unordered_map<T,T>parent;
        for(auto n:adj){
            if(!visited[n.first]){
                bool ans=isCycleDFS(n.first,visited,parent);
                if(ans==true){
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Graph <int>g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(3,1);
    g.addEdge(3,2);
    if (g.cyclePresent())
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}