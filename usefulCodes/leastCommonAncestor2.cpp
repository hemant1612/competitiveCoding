#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define msi multiset<int>
#define nl "\n"
#define sii set<int,int>
#define sz size


#define MAXN 100000
#define LN 17

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

vector<lli> g[MAXN];
lli pa[LN][MAXN];
lli depth[MAXN];

void dfs(lli v,lli parent,lli d)
{
	depth[v]=d;
	pa[0][v]=parent;
	REP(i,g[v].sz())
	{
		if(depth[g[v][i]]==-1)
			dfs(g[v][i],v,d+1);
	}
}

int LCA(int u,int v)
{
	//in the first part we try to bring u and v to the same depth
	if(depth[u]<depth[v]) swap(u,v);
	//move u upwards till they both are on the same level
	for(int i=LN;i>=0;i--)
	{
		if(depth[u]-(1<<i)>=depth[v])
			u=pa[i][u];
	}
	//if they are same then return as this is the lca. It being the root or common node on a branch
	if(u==v) return u;
	//now the present 2 nodes that we have can't be on the same branch
	//we jump upwards till we reach the common node's first child or till we reach the root's first child
	for(int i=LN;i>=0;i--)
	{
		if(pa[i][u]!=-1&&pa[i][u]!=pa[i][v])
		{
			u=pa[i][u];
			v=pa[i][v];
		}
	}
	return pa[0][u];
}

int main()
{
	fio;
	REP(i,MAXN) depth[i]=-1;
	REP(i,LN) REP(j,MAXN) pa[i][j]=-1;
	cout<<"Enter the number of vertices"<<endl;
	int n;
	cin>>n;
	REP(i,n-1)
	{
		lli x,y;
		cin>>x>>y;
		x--;
		y--;
		g[x].pb(y);
		g[y].pb(x);
	}
	cout<<"lets dfs"<<endl;
	dfs(0,-1,0);
	cout<<"lets parent"<<endl;
	FOR(i,1,LN-1)
	{
		FOR(j,0,n-1)
		{
			if(pa[i-1][j]!=-1)
			{
				pa[i][j]=pa[i-1][pa[i-1][j]];
			}
		}
	}
	FOR(i,1,LN-1)
	{
		FOR(j,0,n-1)
		{
			cout<<pa[i-1][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter the number of querries"<<endl;
	int q;
	cin>>q;
	while(q--)
	{
		int u,v;
		cin>>u>>v;
		u--;v--;
		cout<<u+1<<" "<<v+1<<" "<<LCA(u,v)+1<<endl;
	}
	return 0;
}