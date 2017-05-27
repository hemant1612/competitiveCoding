#include <iostream>
using namespace std;
#include <stack>
#include <vector>
vector<int> v[10];
bool vis[10];
void dfs(int s)
{
	cout<<"->"<<s;
	stack <int> st;
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
	int nodes,edges;
	cin>>nodes>>edges;
	for(int i=1;i<=edges;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	int s;
	cin>>s;
	cout<<"nodes visited"<<endl;
	dfs(s);
	cout<<endl;
}