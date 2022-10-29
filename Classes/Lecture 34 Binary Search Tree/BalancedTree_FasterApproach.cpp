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
class Pair{
    public:
    int height;
    bool balanced;
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
Pair isBalanced(node * root){
	Pair p;
    if (!root)
	{
		p.height=0;
        p.balanced=true;
        return p;
	}
    Pair left=isBalanced(root->left);
    Pair right=isBalanced(root->right);
    if (left.balanced and right.balanced and abs(left.height-right.height)<=1)
    {
        p.balanced=true;
    }
    else
    {
        p.balanced=false;
    }
    
    p.height=max(left.height,right.height)+1;
    return p;
}
int main() {
	node* root = createBST();
    if(isBalanced(root).balanced){
        cout<<"Tree Is Balanced";
    }
    else{
        cout<<"Tree Is Not Balanced.";
    }
	return 0;
}