#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
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
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
#define mii map<int,int>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use pow of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}

int bSearch(int low,int high,int a[],int sh)
{
	//function for searching till where is a sh<=
	while(low<high)
	{
		int mid=low+(high-low+1)/2;
		if(a[mid]>sh)
			high=mid-1;
		if(a[mid]<=sh)
			low=mid;
	}
	return low;
}
vi v[200001];
bool vis1[200001];
bool vis2[200001];
int level1[200001];
int level2[200001];
void bfs1(int s)
{
	queue<int> q;
	q.push(s);
	vis1[s]=true;
	level1[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		REP(i,v[node].size())
		{
			if(vis1[v[node][i]]==false)
			{
				q.push(v[node][i]);
				vis1[v[node][i]]=true;
				level1[v[node][i]]=level1[node]+1;
			}
		}
	}
}
void bfs2(int s)
{
	queue<int> q;
	q.push(s);
	vis2[s]=true;
	level2[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		REP(i,v[node].size())
		{
			if(vis2[v[node][i]]==false)
			{
				q.push(v[node][i]);
				vis2[v[node][i]]=true;
				level2[v[node][i]]=level2[node]+1;
			}
		}
	}
}
int main()
{
    fio;
	int n,x;
	cin>>n>>x;
	REP(i,n-1)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	bfs1(1);
	bfs2(x);
	int max=0,ans=0;
	REP(i,n)
	{
		REP(j,v[i].size())
		{
			if(level1[v[i][j]]>max&&level1[v[i][j]]>level2[v[i][j]])
			{
				max=level1[v[i][j]];
				ans=level1[v[i][j]]+level2[v[i][j]]+abs((level2[v[i][j]]-level1[v[i][j]]));
			}
		}
	}
	cout<<ans<<endl;
}