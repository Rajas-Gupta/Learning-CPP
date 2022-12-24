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
        unordered_map<T,T>distance;
        queue<T>q;
        q.push(src);
        visited[src]=true;
        Parent[src]=src;
        distance[src]=0;
        while (!q.empty())
        {
            T father=q.front();
            q.pop();
            // cout<<father<<" ";
            for (auto ch : adj[father])
            {
                if (!visited[ch])
                {
                    q.push(ch);
                    Parent[ch]=father;
                    distance[ch]=distance[father]+1;
                    visited[ch]=true;
                }
            }
        }
        cout<<"Distance: "<<distance[dest];
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
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;

    for (int u = 0; u < 36; u++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            int v=u+dice+board[u+dice];
            g.addEdge(u,v,false);
        }
    }
    g.print();
    cout<<endl;
    g.bfs(0,36);
    return 0;
}