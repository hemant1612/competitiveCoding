#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[10000];
bool visited[10000];
int level[10000];
void findLevel(int s)
{
	visited[s]=true;
	queue<int> q;
	q.push(s);
	level[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<v[node].size();i++)
		{
			if(visited[v[node][i]]==false)
			{
				visited[v[node][i]]=true;
				q.push(v[node][i]);
				level[v[node][i]]=level[node]+1;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int x,y;
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	findLevel(y);
	int node=0,max=0;
	for(int i=1;i<=n;i++)
	{
		if(level[i]>=max)
		{
			max=level[i];
			node=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		level[i]=0;
		visited[i]=false;
	}
	findLevel(node);
	max=0;
	for(int i=1;i<=n;i++)
	{
		if(level[i]>=max)
		{
			max=level[i];
		}
	}
	cout<<max<<endl;
}