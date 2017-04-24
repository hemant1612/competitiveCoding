#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[100000];
bool visited[100000];
int level[100000];
void findLevel(int s)
{
	visited[s]=true;
	queue<int> q;
	q.push(s);
	level[s]=1;
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
	int q;
	cin>>q;
	for(int i=1;i<q;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int s;
	cin>>s;
	int counter=0;
	findLevel(1);
	for(int i=0;i<100000;i++)
	{
		if(level[i]==s)
			counter++;
	}
	cout<<counter<<endl;
}