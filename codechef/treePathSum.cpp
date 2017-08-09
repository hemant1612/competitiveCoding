#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>> v[10];
bool vis[10];
int dist[10]={0};
void dfs(int s)
{
	cout<<"reached "<<endl;
	stack<int> st;
	st.push(s);
	vis[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(vis[v[s][i].first]==false)
		{
			dist[v[s][i].first]=dist[s]+v[s][i].second;
			cout<<endl;
			cout<<"i "<<v[s][i].first<<" depth "<<dist[v[s][i].first]<<endl;
			dfs(v[s][i].first);
		}
	}
}
int level[10]={0};
int findLevel(int s,int end)
{
	cout<<"reached "<<endl;
	vis[s]=true;
	queue<int> q;
	q.push(s);
	dist[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<v[node].size();i++)
		{
			if(vis[v[node][i].first]==false)
			{
				vis[v[node][i].first]=true;
				q.push(v[node][i].first);
				level[v[node][i].first]=level[node]+v[node][i].second;
				cout<<"i "<<v[node][i].first<<" depth "<<level[v[node][i].first]<<endl;
				if(v[node][i].first==end)
					return level[v[node][i].first];
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back(make_pair(y,z));
		v[y].push_back(make_pair(x,z));
	}
	int start,stop;
	cin>>start>>stop;
	int ans=findLevel(start,stop);
	cout<<ans<<endl;
}