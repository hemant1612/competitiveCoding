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
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n,a,b;
	cin>>n>>a>>b;
	int A=a;
	int B=b;
	a=min(A,B);
	b=max(A,B);
	vector<ii> v;
	REP(i,n)
	{
		int x,y;
		cin>>x>>y;
		if(max(x,y)>b)
			continue;
		v.pb(mp(min(x,y),max(x,y)));
	}
	sortv(v);
	ii ans1={0,0};
	ii ans2={0,0};
	ii ans={0,0};
	int maximum=0;
	FORD(i,v.sz()-1,0)
	{
		int x=v[i].fi;
		int y=v[i].se;
		 ans={0,0};
		FORD(j,i-1,0)
		{
			int X=v[j].fi;
			int Y=v[j].se;
			if((X<=a-x&&Y<=b)||(X<=b&&Y<=a-x)||(X<=a&&Y<=b-y)||(X<=b-y&&Y<=a))
			{
				if(ans.fi*ans.se<X*Y)
					ans={X,Y};
			}
		}
		if(ans.fi!=0&&ans.se!=0)
		{
			if(x*y+ans.fi*ans.se>maximum) maximum=x*y+ans.fi*ans.se;
		}
	}
	cout<<maximum<<endl;
	return 0;
}