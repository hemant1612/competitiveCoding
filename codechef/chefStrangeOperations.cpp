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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

lli factorial(int n)
{
	lli ans=1;
	FOR(i,2,n) ans*=i;
	return ans;
}

lli ncr(int n,int r)
{
	lli fac1=factorial(n);
	lli fac2=factorial(r);
	lli fac3=factorial(n-r);
	return fac1/(fac2*fac3);
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		lli n,x,m;
		cin>>n>>x>>m;
		lli a[n];
		REP(i,n) cin>>a[i];
		lli ans=a[x-1];
		int j=1,i=n-2;
		lli copy=x;
		REP(q,copy-1)
		{
			cout<<((ncr(x,1)%))
		}
		FORD(i,n-2,0)
		{
			cout<<((ncr(x,j)%m)*(a[i]%m)%m)<<endl;
			ans+=((ncr(x,j)%m)*(a[i]%m)%m);
			j++;
		}
		cout<<ans<<endl;
	}

	return 0;
}