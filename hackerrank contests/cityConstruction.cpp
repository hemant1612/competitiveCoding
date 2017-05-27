#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout<<setprecision(1)<<fixed;
#include <climits> //limits like Infinity
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
vector<int> v[50000];
bool vis[50000];
int dfs(int x,int y)
{
	stack<int> st;
	st.push(x);
	vis[x]=true;
	REP(i,v[x].size())
	{
		if(v[x][i]==y)
			return 1;
		int ans=-1;
		if(vis[v[x][i]]==false)
		{
			ans=dfs(v[x][i],y);
		}
		if(ans==1)
			return 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	REP(i,m)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	int q;
	cin>>q;
	REP(i,q)
	{
		int decision,i1,i2;
		cin>>decision>>i1>>i2;
		if(decision==1)
		{
			n++;
			if(i2==0)
				v[i1].push_back(n);
			else
				v[n].push_back(i1);
		}
		else
		{
			FOR(j,1,n)
				vis[j]=false;
			int ans=dfs(i1,i2);
			if(ans)
				cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}