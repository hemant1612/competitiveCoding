#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <numeric> //accumulate for vector
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<int> v[10000];
bool vis[10000];
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
	int n,m;
	cin>>n>>m;
	if(m==n-1)
	{
		int minN=10000000,maxN=0;
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			if(min(x,y)<minN)
				minN=min(x,y);
			if(max(x,y)>maxN)
				maxN=max(x,y);
			v[x].push_back(y);
			v[y].push_back(x);
		}
		//cout<<n<<endl;
		dfs(n);
		int f=1;
		//cout<<minN<<endl;
		//for(int i=minN;i<=maxN;i++)
		//	cout<<i<<" "<<vis[i]<<endl;
		for(int i=minN;i<=maxN;i++)
		{
			if(vis[i]==false)
			{
				//cout<<i<<endl;
				cout<<"NO"<<endl;
				f=0;
				break;
			}
		}
		if(f==1)
			cout<<"YES"<<endl;
	}
	else
	{
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		cout<<"NO"<<endl;
	}
}