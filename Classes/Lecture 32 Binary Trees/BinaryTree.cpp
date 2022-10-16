#include <iostream>
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
class Pair{
    public:
    int height;
    int diameter;
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
int countNodes(node * root){
    if (!root)
    {
        return 0;
    }
    int leftkacount=countNodes(root->left);
    int rightkacount=countNodes(root->right);
    return rightkacount+leftkacount+1;
}
int Height(node * root){
    if (!root)
    {
        return 0;
    }
    return max(Height(root->right),Height(root->left))+1;
    
}
int diameter(node * root){
    if (!root) return 0;
    {
        int op1=Height(root->left)+Height(root->right);
        int op2=diameter(root->left);
        int op3=diameter(root->right);
        return max(op1,max(op2,op3));
    }
    
}
Pair fastDiameter(node * root){
    Pair ans;
    if (!root)
    {
        ans.height=ans.diameter=0;
        return ans;
    }
    Pair left=fastDiameter(root->left);
    Pair right=fastDiameter(root->right);

    ans.height=max(left.height,right.height)+1;
    int op1=left.height+right.height;
    int op2=left.diameter;
    int op3=right.diameter;
    ans.diameter=max(op1,max(op2,op3));
    return ans;
}
node * findNode(node * root,int key){
    if (!root)
    {
        return NULL;
    }
    if (root->data==key)
    {
        return root;
    }
    node * ans=findNode(root->left,key);
    if (ans)
    {
        return ans;
    }
    return findNode(root->right,key);
}
int main(){
    
    node* root = createTree();
    inorder(root);
    cout<<endl;
    cout<<"Total Number Of Nodes: "<<countNodes(root);
    cout<<endl;
    cout<<"Height Of Tree: "<<Height(root)<<endl;
    Pair h=fastDiameter(root);
    cout<<h.diameter<<" "<<h.height<<endl;
    return 0;
}