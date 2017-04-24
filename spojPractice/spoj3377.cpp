#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout <<setprecision(1)<<fixed;
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<int> v;
bool vis;
bool sex;
int decide;
void initialize(int nodes)
{
	vis=new int[nodes];
	sex=new int[nodes];
	v.resize(nodes);
	decide=0;
	REP(i,nodes)
	{
		vis[i]=false;
		sex[i]=false;
	}
}
void dfs(int s)
{
	vis[s]=true;
	if(decide&1)
	{
		sex[s]=1;
		decide++;
	}
	else
	{
		sex[s]=0;
		decide++;
	}
	for(int i=0;i<v[s].size();i++)
	{
		if(vis[v[s][i]]==false)
			dfs(v[s][i]);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int nodes,edges;
		initialize(nodes);
		cin>>nodes>>edges;
		FOR(i,1,edges)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for(int i=1;i<=nodes;i++)
		{
			if(vis[i]==false)
			{
				dfs(i);
			}
		}
		int flag=1;
		for(int i=1;i<=nodes;i++)
		{
			int f=1;
			for(int j=0;j<v[i].size();j++)
			{
				if(sex[i]==sex[v[i][j]])
				{
					f=0;
					break;
				}
			}
			if(f==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"Suspicious bugs found!"<<endl;
		else
			cout<<"No suspicious bugs found!"<<endl;
	}
}