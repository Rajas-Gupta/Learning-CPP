#include <queue>
#include <iostream>
#include <functional>
using namespace std;
void printQueue(priority_queue<int, vector<int>, greater<int> >q){
    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}
int main()
{
    int data;
    int cnt=0;
    int k=3;
    // cin>>k;
    priority_queue<int, vector<int>, greater<int> >q;
    while (1)
    {
        cin>>data;
        if (data==-1)
        {
            printQueue(q);
        }
        else
        {
            if (cnt<k)
            {
                q.push(data);
                cnt++;
            }
            else{
                if (data>q.top())
                {
                    q.pop();
                    q.push(data);
                }
            }
        }
        
    }
    return 0;
}