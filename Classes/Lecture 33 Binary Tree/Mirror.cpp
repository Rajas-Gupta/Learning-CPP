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
void mirror(node * root){
    if(!root){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}
int main(){
    
    node* root = createTree();
    inorder(root);
    cout<<endl;
    mirror(root);
    inorder(root);
    return 0;
}