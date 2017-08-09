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
	int n;
	cin>>n;
	vi v[100001];
	int a[n];
	REP(i,n)
	{
		int x;
		cin>>x;
		v[x].pb(i);
	}
	vii v1;
	//sortv(v)
	REP(i,100001)
	{
		if(v[i].size()!=0)
		{
			int min=INF,max=0;
			REP(j,v[i].size())
			{
				if(v[i][j]<min) min=v[i][j];
				if(v[i][j]>max) max=v[i][j];
			}
			v1.pb(mp(min,max));
		}
	}
	FOR(i,1,v1.size())
	{
		if(v1[i].fi<=v1[i-1].se&&v1[i].fi>=v1[i-1].fi)
		{
			cout<<"i "<<i<<endl;
			int l1=v1[i-1].fi;
			int l2=v1[i-1].se;
			int l3=v1[i].fi;
			int l4=v1[i].se;
			v1.erase(v1.begin()+i-1);
			cout<<"v1"<<endl;
			REP(i,v1.size()) cout<<v1[i].fi<<" "<<v1[i].se<<endl;
			v1.erase(v1.begin()+i-1);
			cout<<"v2"<<endl;
			REP(i,v1.size()) cout<<v1[i].fi<<" "<<v1[i].se<<endl;
			i--;
			v1.insert(v1.begin()+i,{l1,max(l2,l4)});
			cout<<"v3"<<endl;
			REP(i,v1.size()) cout<<v1[i].fi<<" "<<v1[i].se<<endl;
		}
	}
	REP(i,v1.size()) cout<<v1[i].fi<<" "<<v1[i].se<<endl;
	return 0;
}