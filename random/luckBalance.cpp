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
	int n,k;
	cin>>n>>k;
	vii v;
	int ans=0;
	int counter=0;
	REP(i,n)
	{
		int x,y;
		if(y==1) counter++;
		cin>>x>>y;
		v.pb(mp(y,x));
	}
	sortv(v);
	if(counter<k)
	{
		int counter1=0;
		REP(i,n)
		{
			if(counter1<=counter)
			{
				ans-=v[i].se;
				counter1++;
			}
			else
				ans+=v[i].se;
		}
		cout<<"ans "<<ans<<" ";
	}
	else
	{
		REP(i,n)
		{
			if(v[i].fi==1)
				ans-=v[i].se;
			else ans+=v[i].se;
		}
	}
	cout<<endl; 
	cout<<ans<<endl;
	return 0;
}