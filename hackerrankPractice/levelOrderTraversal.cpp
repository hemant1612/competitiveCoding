/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) 
{
	queue<node*> q;
	node *temp=root;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		if(temp->left!=nullptr)
			q.push(temp->left);
		if(temp->right!=nullptr)
			q.push(temp->right);
		temp=q.front();
		q.pop();
	}
}