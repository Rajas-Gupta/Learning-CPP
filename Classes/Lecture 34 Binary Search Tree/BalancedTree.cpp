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
bool isBalanced(node * root){
	if (!root)
	{
		return true;
	}
	
    int hl=Height(root->left);
    int hr=Height(root->right);
    if (abs(hl-hr)<=1)
    {
        bool isLB=isBalanced(root->left);
        bool isRB=isBalanced(root->right);
        if (isLB and isRB)
        {
            return true;
        }
    }
    return false;
}
int main() {
	node* root = createBST();
    if(isBalanced(root)){
        cout<<"Tree Is Balanced";
    }
    else{
        cout<<"Tree Is Not Balanced.";
    }
	return 0;
}