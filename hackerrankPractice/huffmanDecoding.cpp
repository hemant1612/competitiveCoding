typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

void decode_huff(node * root,string s)
{
    string ans="";
    node *temp=root;
    for(int i=0;i<s.length();i++)
    {
    	cout<<temp->data<<endl;
    	if(temp->left==nullptr&&temp->right==nullptr)
    	{
    		cout<<temp->data<<endl;
    		temp=root;
    		i--;
    	}
    	if(s.at(i)==1)
    		temp=temp->right;
    	if(s.at(i)==0)
    		temp=temp->left;
    }
    cout<<ans<<endl;
}