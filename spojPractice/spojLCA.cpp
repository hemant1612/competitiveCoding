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

#define MAXN 1000
#define LN 10

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
	if(depth[u]<depth[v]) swap(u,v);
	for(int i=LN;i>=0;i--)
	{
		if(depth[u]-(1<<i)>=depth[v])
			u=pa[i][u];
	}
	if(u==v) return u;
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
	int t;
	cin>>t;
	while(t--)
	{
		REP(i,MAXN) g[i].clear();
		int n;
		cin>>n;
		FOR(i,1,n)
		{
			int x;
			cin>>x;
			REP(j,x)
			{
				int node;
				cin>>node;
				g[i-1].pb(node-1);
			}
		}
		int q;
		cin>>q;
		cout<<"Case 1:"<<endl;
		while(q--)
		{
			int u,v;
			cin>>u>>v;
			u--,v--;
			cout<<LCA(u,v)+1<<endl;
		}
	}

	return 0;
}