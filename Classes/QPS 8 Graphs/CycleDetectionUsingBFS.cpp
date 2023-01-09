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
    bool isCycleBFS(T src,unordered_map<T,bool>&visited,unordered_map<T,T>&Parent){
        queue<T>q;
        q.push(src);
        visited[src]=true;
        Parent[src]=src;
        while (!q.empty())
        {
            T node=q.front();
            q.pop();
            for (auto ch : adj[node])
            {
                if(visited[ch] && ch != Parent[node]){
                    return true;
                }
                else if (!visited[ch])
                {
                    q.push(ch);
                    Parent[ch]=node;
                    visited[ch]=true;
                }
            }
        }
        return false;
    }
    bool cyclePresent(){   //For seeing into components
        unordered_map<T,bool>visited;
        unordered_map<T,T>Parent;
        for(auto n:adj){
            if(!visited[n.first]){
                bool ans=isCycleBFS(n.first,visited,Parent);
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