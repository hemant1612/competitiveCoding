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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

vector<pair<int,lli>> tree[100001];
bool visited[100001];
lli attractive[100001];
lli findLevel(int s,int end,lli k)
{
	//cout<<"enter"<<endl;
	visited[s]=true;
	queue<int> q;
	q.push(s);
	attractive[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		//cout<<"searching with "<<node<<endl;
		for(int i=0;i<tree[node].size();i++)
		{
			if(visited[tree[node][i].fi]==false)
			{
				//cout<<"node hit "<<tree[node][i].fi<<" which has value "<<tree[node][i].se<<endl;
				visited[tree[node][i].fi]=true;
				q.push(tree[node][i].fi);
				if(tree[node][i].se<=k)
				{
					attractive[tree[node][i].fi]=(attractive[node]^tree[node][i].se);
					//cout<<"attractive "<<(attractive[node]^tree[node][i].se)<<endl;
				}
				else attractive[tree[node][i].fi]=attractive[node];
				//cout<<"new attractive of "<<tree[node][i].se<<" is "<<attractive[tree[node][i].se]<<endl;
				if(tree[node][i].fi==end)
					return attractive[tree[node][i].fi];
			}
		}
	}
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		REP(i,100001) tree[i].clear();
		REP(i,n-1)
		{
			int u,v;
			lli c;
			cin>>u>>v>>c;
			tree[u].pb(mp(v,c));
			tree[v].pb(mp(u,c));
		}
		int m;
		cin>>m;
		while(m--)
		{
			int u,v;
			lli k;
			cin>>u>>v>>k;
			if(v!=u)
			{
				REP(i,100001) attractive[i]=0;
				REP(i,100001) visited[i]=false;
				cout<<findLevel(u,v,k)<<endl;
			}
			else cout<<"0"<<endl;
		}
	}

	return 0;
}