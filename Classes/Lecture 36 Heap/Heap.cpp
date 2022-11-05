#include <iostream>
#include <vector>
using namespace std;
class Minheap{
    vector<int>v;
    void heapify(int indx){
        int left=2*indx;
        int right=2*indx+1;
        int temp=indx;
        if (left<v.size() and v[temp]>v[left])
        {
            temp=left;
        }
        if (right<v.size() and v[temp]>v[right])
        {
            temp=right;
        }
        if (temp!=indx)
        {
            swap(v[temp],v[indx]);
            heapify(temp);
        }
    }
    public:
    Minheap(){
        v.push_back(-1);
    }
    void push(int d){
        v.push_back(d);
        int c = v.size()-1;
        int p=c/2;
        while (c>1 and v[p]>v[c])
        {
            swap(v[p],v[c]);
            c=p;
            p/=2;
        }
    }
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
    }
    bool empty(){
        return v.size()==1;
    }
    int top(){
        return v[1];
    }
};
int main()
{
    Minheap h;
    h.push(1);
    h.push(9);
    h.push(4);
    h.push(8);
    h.push(0);
    while (!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
    

    return 0;
}