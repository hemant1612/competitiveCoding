#include <iostream>
#include <algorithm>
using namespace std;

//Data Structure to store a Binary Search Tree Node
struct Node
{
	int data;
	Node *left,*right;
};

//Function to create a new binary tree node
Node* newNode(int key)
{
	Node* node=new Node;
	node->data=key;
	node->left=node->right=nullptr;
	return node;
}

//Function to perform in-order traversal of the tree
void inorder(Node *root)
{
	if(root==nullptr)
		return
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

//Recursive function to insert a key into a BST
Node* insert(Node *root,int key)
{
	//if the root is null then create a new node and return it
	if(root==nullptr)
		return newNode(key);
	//if the given key is less than root node recurse on the left side
	if(key<root->data)
		root->left=insert(root->left,key);
	//if the key is more recurse on the right side
	if(key>root->data)
		root->right=insert(root->right,key);
	return root;
}
//Function to construct balanced BST from given sorted array
//The root of the tree is passed by reference
void convert(int keys[],int low,int high, Node* &root)
{
	if(low>high)
		return;
	int mid=(low+high)/2;
	//construct a new node from mid element and assign
	root=newNode(keys[mid]);
	//left subtree will be formed by the keys less
	convert(keys,low,mid-1,root->left);
	//right subtrees of the root will be formed by the keys more
	convert(keys,mid+1,high,root->right);
}
Node *convert(int keys[],int n)
{
	//sort the keys first
	sort(keys,keys+n);

	//construct a balanced BST
	Node* root=nullptr;
	convert(keys,0,n-1,root);

	//return root of the node
	return root;
}
int main()
{
	int keys[]={15,10,20,8,12,16,25};
	int n = sizeof(keys)/sizeof(keys[0]);
	Node *root=convert(keys,n);
	inorder(root);
	return 0;
}