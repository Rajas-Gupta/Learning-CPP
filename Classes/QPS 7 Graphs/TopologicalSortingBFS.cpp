#include <unordered_map>
#include <queue>
#include <list>
#include <iostream>
using namespace std;
template<typename T>
class Graph{
    public:
    unordered_map<T,list<T> >adj;
    void addEdge(T u,T v,bool bidir=false){
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }
    void tpsBfs(){
        unordered_map<T,int>indegree;
        for(auto n : adj){
            for(auto ch : n.second){
                if (indegree.count(ch))
                {
                    indegree[ch]++;
                }
                else{
                    indegree[ch]=1;
                }
            }
        }
        //Find The nodes With indegree zero and insert them in queue
        queue<T>q;
        list<T>l;
        for(auto n:adj){
            if(indegree.count(n.first)==0) q.push(n.first);
        }
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            l.push_back(node);
            for(auto ch : adj[node]){
                indegree[ch]--;
                if (indegree[ch]==0)
                {
                    q.push(ch);
                }
                
            }
        }
        for(auto c : l){
            cout<<c<<' ';
        }
        cout<<endl;
    }
};
int main()
{
    Graph<string>g;
    g.addEdge("Hindi","Maths");
    g.addEdge("English","Maths");
    g.addEdge("English","Computer");
    g.addEdge("Maths","C++");
    g.addEdge("Computer","C++");
    g.addEdge("Computer","Java");
    g.addEdge("C++","Web");
    g.addEdge("Java","Web");
    g.addEdge("Java","Android");
    g.tpsBfs();
    return 0;
}