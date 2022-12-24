#include <unordered_map>
#include <list>
#include <queue>
#include <iostream>
#include <set>
using namespace std;
template < typename T>
class Graph {
public:
	unordered_map<T, list<pair<T, int> > > adj;
	void addEdge(T u, T v, int dist, bool bidir = true) {
		adj[u].push_back(make_pair(v, dist));
		if (bidir) {
			adj[v].push_back(make_pair(u, dist));
		}
	}

	void print() {
		for (auto n : adj) {
			cout << n.first << " --> ";
			for (auto ch : n.second) {
				cout << "(" << ch.first << ", " << ch.second << ") ";
			}
			cout << endl;
		}
	}
    void dijkstras(T src,T dest){
        set<pair<int,T> >s;
        unordered_map<T,int> distance;
        unordered_map<T,T> parent;
        //Pehle Saare Nodes Ka distance infinite set kia
        for(auto n: adj){
            distance[n.first]=INT_MAX;
        }
        //Src ka distance src se 0 hoga
        distance[src]=0;
        parent[src]=src;
        //src ko set mai 0 distance ke saath insert kia
        s.insert(make_pair(distance[src],src));
        while (!s.empty())
        {
            //set se node niaklo and usko father assume kro
            //Usse children per iterate kro
            auto p=*(s.begin());
            auto father=p.second;
            auto father_distance=p.first;
            s.erase(s.begin());
            for(auto cp: adj[father]){
                //toh set mai se child aur edge distance alag kiya
                auto c= cp.first;
                auto edge_Distance=cp.second;
                //Ab agar child ka distance zyada hai father and unke edge distance se
                //toh uske current distance se kam distance ka raasta milgya
                if (edge_Distance+father_distance<distance[c])
                {
                    //ab agar koi child already set mai present hai toh usko udaa doo
                    auto address=s.find(make_pair(distance[c],c));
                    if (address!=s.end())
                    {
                        s.erase(address);
                    }
                    //distance and parent update kro child ka
                    distance[c]=edge_Distance+father_distance;
                    parent[c]=father;
                    //Aur update distance ke saath child ko set mai daaldo
                    s.insert(make_pair(distance[c],c));
                }
                
            }
        }
        for(auto n:distance){
            cout<<"Distance of "<<n.first<<" from "<<src<<" : "<<n.second<<endl;
        }
        while (dest!=parent[dest])
        {
            cout<<dest<<" <-- ";
            dest=parent[dest];
        }
        cout<<dest;
        cout<<endl;
    }
};
int main()
{
    Graph<string>g;
    g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Mumbai", "Jaipur", 8);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Agra", "Bhopal", 2);
    g.print();
    g.dijkstras("Amritsar","Mumbai");
    return 0;
}