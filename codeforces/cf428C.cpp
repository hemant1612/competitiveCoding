#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define whatIs(x) cout<<#x<<" is "<<x<<endl;
#define fillA(a,value) memset(a,value,sizeof(a));
#define len(s) s.length()
#define reached cout<<"reached "<<endl;
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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;
vi v[100001];
int visited[100001]={0};
int level[100001]={0};
double probablity[100001]={0.0};

void bfs()
{
	visited[1]=true;
	queue<int> q;
	q.push(1);
	level[1]=0;
	probablity[1]=1.0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		int subtrees=0;
		if(node==1)
			subtrees=v[node].sz();
		else subtrees=v[node].sz()-1;
		for(int i=0;i<v[node].sz();i++)
		{
			if(visited[v[node][i]]==false)
			{
				visited[v[node][i]]=true;
				q.push(v[node][i]);
				level[v[node][i]]=level[node]+1;
				probablity[v[node][i]]=probablity[node]/subtrees;
			}
		}
	}
}

int main()
{
	fio;
	int n;
	cin>>n;
	REP(i,n-1)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	bfs();
	double expected=0;
	REP(i,n+1)
	{
		if(v[i].sz()==1)
		{
			expected+=(level[i]*probablity[i]);
		}
	}
	cout << fixed << setprecision(7) << expected << endl;
	return 0;
}