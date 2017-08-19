#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<endl;
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

void functionR(vi v,map<vector<int>,int> &m)
{
	REP(i,v.sz()-1)
	{
		if(v[i]>0&&v[i+1]>0)
		{
			if(i<v.sz()-2)
			{
				v[i]--;
				v[i+1]--;
				v[i+2]++;
				if(!m[v])
				{
					m[v]++;
					functionR(v,m);
				}
				v[i]++;
				v[i+1]++;
				v[i+2]--;
			}
			else
			{
				v[v.sz()-2]--;
				v[v.sz()-1]--;
				v.pb(1);
				if(!m[v])
				{
					m[v]++;
					functionR(v,m);
				}
				v[v.sz()-2]++;
				v[v.sz()-1]++;
				v.pop_back();
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
		map<vector<int>,int> m;
		int n;
		cin>>n;
		vi v;
		REP(i,n)
		{
			int x;
			cin>>x;
			v.pb(x);
		}
		m[v]++;
		functionR(v,m);
		cout<<m.sz()<<endl;
	}

	return 0;
}