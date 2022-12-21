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
    void bfs(T src, T dest){
        unordered_map<T,bool>visited;
        unordered_map<T,T>Parent;
        queue<T>q;
        q.push(src);
        visited[src]=true;
        Parent[src]=src;
        while (!q.empty())
        {
            T father=q.front();
            q.pop();
            cout<<father<<" ";
            for (auto ch : adj[father])
            {
                if (!visited[ch])
                {
                    q.push(ch);
                    Parent[ch]=father;
                    visited[ch]=true;
                }
            }
        }
        cout<<endl;
        //PRINTING THE PATH
        while (dest!=Parent[dest])
        {
            cout<<dest<<" <-- ";
            dest=Parent[dest];
        }
        cout<<dest;
    }
};
int main()
{
    Graph <int>g;
    // g.addEdge("a","b");
    // g.addEdge("c","b");
    // g.addEdge("d","a");
    // g.addEdge("d","e");
    // g.addEdge("a","e");
    g.addEdge(0,1);
    g.addEdge(2,1);
    g.addEdge(2,4);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.addEdge(3,2);
    g.addEdge(3,5);
    g.print();
    cout<<endl;
    g.bfs(0,5);
    return 0;
}