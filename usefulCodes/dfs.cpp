#include <iostream>
using namespace std;
#include <stack>
#include <vector>
vector<int> v[10];
bool vis[10];
void dfs(int s)
{
	stack<int> st;
	st.push(s);
	vis[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(vis[v[s][i]]==false)
			dfs(v[s][i]);
	}
}

int main()
{
	int x,y,nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cout<<"enter starting node"<<endl;
	int s;
	cin>>s;
	dfs(s);
	cout<<"enter check node"<<endl;
	int check;
	cin>>check;
	if(vis[check]==true)
		cout<<"connected"<<endl;
	else cout<<"not connected"<<endl;
}