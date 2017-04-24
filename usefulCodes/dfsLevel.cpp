#include <iostream>
using namespace std;
#include <stack>
#include <vector>
vector<int> v[10];
bool vis[10];
int level[10];
void dfs(int s)
{
	stack<int> st;
	st.push(s);
	vis[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(vis[v[s][i]]==false)
		{
			cout<<endl;
			//cout<<"i "<<s<<" depth "<<level[s]<<endl;
			level[v[s][i]]=level[s]+1;
			cout<<endl;
			cout<<"i "<<v[s][i]<<" depth "<<level[s]+1<<endl;
			dfs(v[s][i]);
		}
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
	level[s]=0;
	dfs(s);
	for(int i=1;i<=10;i++)
	{
		cout<<"i "<<i<<" depth "<<level[i]<<endl;
	}
}