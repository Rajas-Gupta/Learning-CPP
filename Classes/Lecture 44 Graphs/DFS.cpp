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
    void dfshelper(T src,unordered_map<T,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;
        for (auto ch:adj[src])
        {
            if (!visited[ch])
            {
                dfshelper(ch,visited);
                visited[ch]=true;
            }
        }
    }
    void dfs(T src){
        unordered_map<T, bool>visited;
        dfshelper(src,visited);
        int component=1;
        for(auto n : adj){
            if (!visited[n.first])
            {
                dfshelper(n.first,visited);
                component++;
            } 
        }
        cout<<"Total Components: "<<component;
    }
};
int main(){
    Graph<int>g;
    g.addEdge(0,1);
    g.addEdge(2,1);
    g.addEdge(2,4);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.addEdge(3,2);
    g.addEdge(3,5);
    g.addEdge(7,8);
    g.addEdge(8,9);
    g.addEdge(80,90);
    g.dfs(0);
    return 0;
}