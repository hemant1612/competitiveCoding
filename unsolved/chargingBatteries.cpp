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

int main()
{
	fio;
	int n,m,k;
	cin>>n>>m>>k;
	vii v;
	int a[m][2];
	vii v1;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0)
			v1.pb(mp(0,0));
		else
			v.pb(mp(x,y));
	}
	sortv(v);
	for(int i=0;i<v.sz();i++)
	{
		if(v[i].se==0)
		{
			v1.pb(mp(v[i].fi,v[i].se));
		}
	}
	for(int i=0;i<v.sz();i++)
	{
		if(v[i].fi==n)
		{
			v1.pb(mp(v[i].fi,v[i].se));
		}
	}
	FORD(i,v.sz()-1,0)
	{
		if(v[i].se==n)
		{
			v1.pb(mp(v[i].fi,v[i].se));
		}
	}
	FORD(i,v.sz()-1,0)
	{
		if(v[i].fi==0)
		{
			v1.pb(mp(v[i].fi,v[i].se));
		}
	}
	reached
	cout<<v1.sz()<<endl;
	REP(i,v1.sz()) cout<<v1[i].fi<<" "<<v1[i].se<<endl;
	return 0;
}