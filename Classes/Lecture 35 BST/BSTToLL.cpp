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
class LinkedList{
    public:
    node * head,* tail;
};
LinkedList BSTToLL(node * root){
    LinkedList l;
    if (!root)
    {
        l.head=l.tail=NULL;
    }
    
    if (root->left and root->right)
    {
        LinkedList left=BSTToLL(root->left);
        LinkedList right=BSTToLL(root->right);
        left.tail->right=root;
        root->right=right.head;
        l.head=left.head;
        l.tail=right.tail;
        return l;
    }
    else if(root->left and !root->right){
        LinkedList left=BSTToLL(root->left);
        left.tail->right=root;
        l.head=left.head;
        l.tail=root;
        return l;
    }
    else if(!root->left and root->right){
        LinkedList right=BSTToLL(root->right);
        root->right=right.head;
        l.head=root;
        l.tail=right.tail;
        return l;
    }
    else{
        l.head=l.tail=root;
        return l;
    }
}
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int);
    node * root=CreateBalancedBST(a,0,n-1);
    preorder(root);
    cout<<endl;
    LinkedList l=BSTToLL(root);
    node * head=l.head;
    while (head)
    {
        cout<<head->data<<"-->";
        head=head->right;
    }
    cout<<"NULL \n";
	return 0;
}