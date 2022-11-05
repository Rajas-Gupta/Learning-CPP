#include <queue>
#include <iostream>
#include <functional>
using namespace std;
class meriClass{
    public:
    //Functor
    bool operator()(int a,int b){
        return a>b;
        // a denote parent
        // b denote child
    }
};
int main()
{
    //priority_queue<int>q;   MAX HEAP
    //priority_queue<int, vector<int>, greater<int> >q;  // MIN HEAP
    priority_queue<int, vector<int>, meriClass >q;  
    q.push(1);    
    q.push(6);    
    q.push(5);    
    q.push(3);    
    q.push(2);    
    q.push(7);
    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}