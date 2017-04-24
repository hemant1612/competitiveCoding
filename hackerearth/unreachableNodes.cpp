#include <iostream>
using namespace std;
#include <stack>
#include <vector>
vector<int> v[100000];
bool vis[1000000];
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
	int s;
	cin>>s;
	dfs(s);
	int counter=0;
	for(int i=1;i<=nodes;i++)
	{
		if(vis[i]==false)
			counter++;
	}
	cout<<counter<<endl;
}