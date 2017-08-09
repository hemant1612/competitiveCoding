/*
	Analysis:
		This code takes O(n) time to process the whole trees parents
		After that O(h) for each querry so worst case is O(n)
		Total time O(N*Q)
		too slow for most judges!
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_NODES=100;
int parent[MAX_NODES]; //keeps track of every parent in the tree
bool visited[MAX_NODES];
vector<int> tree[MAX_NODES]; //tree is an undirected graph using adjacency list

//getParents travels the array and computes the parrent array
//the pre-order traversal begins by calling getParents(root_node,-1)
void getParents(int node,int par)
{
	for(int i=0;i<tree[node].size();i++)
	{
		if(tree[node][i]!=par)
		{
			parent[tree[node][i]]=node;
			getParents(tree[node][i],node);
		}
	}
}
int root_node=0;
//computes the lca of nodes u and v
int LCA(int u,int v)
{
	//travel from node u until root node and mark the vertices encountered along the path
	int lca;
	while(1)
	{
		visited[u]=true;
		if(u==root_node)
			break;
		u=parent[u];
	}	
	//now travel from v and keep on going up until we hit a node that has already been visited
	while(1)
	{
		if(visited[v])
		{
			//this is intersection and lca is found
			lca=v;
			break;
		}
		v=parent[v];
	}
	return lca;
}

int main()
{
	cout<<"enter the number of nodes"<<endl;
	int n;
	cin>>n;
	cout<<"enter the edges"<<endl;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	cout<<"enter 2 nodes"<<endl;
	int u,v;
	cin>>u>>v;
	getParents(root_node,-1);
	cout<<LCA(u,v)<<endl;
}