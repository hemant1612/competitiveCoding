#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[10];
bool vis[10];
int level[10];
void initialize()
{
	for(int i=0;i<10;i++)
		level[i]=0;
}

void bfs(int s)
{
	vis[s]=true;
	queue<int> q;
	q.push(s);
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++)
		{
			if(vis[v[p][i]]==false)
			{
				vis[v[p][i]]=true;
				q.push(v[p][i]);
			}
		}
	}
}

int main()
{
	initialize();
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
	//bfs(s);
	levelA(s);
	cout<<"enter check node"<<endl;
	int check;
	cin>>check;
	if(vis[check]==true)
		cout<<"connected"<<endl;
	else cout<<"not connected"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"i "<<i<<" level "<<level[i]<<endl;
	}
	return 0;
}