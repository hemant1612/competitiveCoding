#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[10];
bool visited[10];
int level[10];
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
	findLevel(s);
	for(int i=0;i<10;i++)
	{
		cout<<i<<" "<<level[i]<<endl;
	}
}