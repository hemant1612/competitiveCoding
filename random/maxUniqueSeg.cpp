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
#define si set<int>

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
		lli c[n+1],w[n+1],sum[n+1];
		sum[0]=0;
		FOR(i,1,n) cin>>c[i];
		FOR(i,1,n) cin>>w[i];
		FOR(i,1,n) sum[i]=sum[i-1]+w[i];
		mii m;
		int l=1,r=2;
		m[c[l]]=1;
		lli ans=0;
		while(r<=n)
		{
			if(m[c[r]]==0)
			{
				m[c[r]]++;
				ans=max(ans,sum[r]-sum[l-1]);
				r++;
			}
			else
			{
				m[c[l]]--;
				l++;
			}
		}
		cout<<ans<<endl;
	}
}