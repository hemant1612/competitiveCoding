void inOrder(node *root)
{
	if(root==nullptr)
		return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}