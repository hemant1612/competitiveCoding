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
#define mii map<int,int>
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		viii v;
		int r[n];
		int l[n];
		REP(i,n)
		{
			cin>>l[i];
		}
		REP(i,n)
		cin>>r[i];
		REP(i,n)
		{
			v.pb(mt(-1*r[i]*l[i],r[i]*-1,i+1));
		}
		sortv(v);
		for(auto i : v)
		{
			cout<<get<2>(i)<<endl;
			break;
		}
	}
}