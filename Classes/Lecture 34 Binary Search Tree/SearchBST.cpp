// BST.cpp
#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};
node* insertInBST(node* root, int d) {
	if (!root) {
		root  = new node(d);
		return root;
	}

	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}
// 8 3 10 1 6 14 4 7 13 -1
node* createBST() {
	int data;
	cin >> data;
	if (data  == -1) {
		return NULL;
	}
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}
void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
void printRange(node * root,int k1,int k2){
    if (root==NULL)
    {
        return;
    }
    printRange(root->left,k1,k2);
    if (root->data>=k1 and root->data<=k2)cout<<root->data<<" ";
    printRange(root->right,k1,k2);
}
node * findElement(node * root,int key){
	if (!root)
	{
		return NULL;
	}
	if (root->data==key)
	{
		return root;
	}
	else if (key<root->data)
	{
        return	findElement(root->left,key);
	}
	else{
		return findElement(root->right,key);
	}
}
int main() {

	node* root = createBST();
	node * ans=findElement(root,10);
	if (ans)
	{
		cout<<ans->data<<endl;
	}
	else{
		cout<<"Not Found \n";
	}
	
	return 0;
}