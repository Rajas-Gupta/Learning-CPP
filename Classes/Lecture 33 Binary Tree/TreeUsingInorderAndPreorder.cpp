#include <iostream>
#include <queue>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout<< root -> data <<" ";
    inorder(root -> right);
}
int pre[]={8,10,1,6,4,7,3,14,13};
int k=0;
int in[]={1,10,4,6,7,8,3,13,14};
node * makeTree(int * in,int s,int e){
    if (s>e)
    {
        return NULL;
    }
    node * root=new node(pre[k++]);
    int i=-1;
    for (int j = 0; j <=e; j++)
    {
        if (in[j]==root->data)
        {
            i=j;
            break;
        }
    }
    root->left=makeTree(in,s,i-1);
    root->right=makeTree(in,i+1,e);
    return root;
}
void levelOrder(node * root){
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node * f=q.front();
        q.pop();
        if (f!=NULL)
        {
            cout<<f->data<<" ";
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
        else
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }   
        }   
    }
}
int main(){
    
    node* root = makeTree(in,0,8);
    inorder(root);
    cout<<endl;
    levelOrder(root);
    return 0;
}