#include <iostream>
#include <math.h>
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
int Height(node * root){
    if (!root)
    {
        return 0;
    }
    return max(Height(root->right),Height(root->left))+1;
}
node * CreateBalancedBST(int *a,int s,int e){
    if (s>e)
    {
        return NULL;
    }
    int m=(s+e)/2;
    node * root=new node(a[m]);
    root->left=CreateBalancedBST(a,s,m-1);
    root->right=CreateBalancedBST(a,m+1,e);
    return root;
}
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int);
    node * root=CreateBalancedBST(a,0,n-1);
    preorder(root);
	return 0;
}