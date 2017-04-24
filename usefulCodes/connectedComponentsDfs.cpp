#include <iostream>
#include <vector>
using namespace std;
vector<int> v[10];
bool vis[10];
void dfs(int s)
{
	vis[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(vis[v[s][i]]==false)
			dfs(v[s][i]);
	}
}
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int connectedComponents=0;
	for(int i=1;i<=nodes;i++)
	{
		if(vis[i]==false)
		{
			dfs(i);
			//cout<<"vis "<<vis[i]<<endl;
			connectedComponents++;
			//cout<<connectedComponents<<endl;
		}
	}
	cout<<connectedComponents<<endl;
}