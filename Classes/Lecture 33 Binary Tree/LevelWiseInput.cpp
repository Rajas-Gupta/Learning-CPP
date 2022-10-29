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
node* createTree(){
    //base case:
    int data;
    cin>>data;
    if(data ==-1){
        return NULL;
    }
    //recursive case:
    node* root = new node(data);
    root -> left = createTree();
    root -> right = createTree();
    return root;
}
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout<< root -> data <<" ";
    inorder(root -> right);
}
int Height(node * root){
    if (!root)
    {
        return 0;
    }
    return max(Height(root->right),Height(root->left))+1;
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
node * LevelWiseBuild(){
    int data;
    cin>>data;
    node * root=new node(data);
    if (data==-1)
    {
        return NULL;
    }
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node * f=q.front();
        q.pop();
        cout<<"Enter Data for: "<<f->data<<" ";
        int l,r;
        cin>>l>>r;
        if (l!=-1)
        {
            f->left=new node(l);
            q.push(f->left);
        }
        if (r!=-1)
        {
            f->right=new node(r);
            q.push(f->right);
        }
    }
    return root;
}
int main(){
    // node* root = createTree();
    // inorder(root);
    node * root=LevelWiseBuild();
    cout<<endl;
    levelOrder(root);
    return 0;
}