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
	lli a[n];
	REP(i,n) cin>>a[i];
	int ans=0;
	REP(i,n)
	{
		FOR(j,i+1,n-1)
		{
			FOR(k,j+1,n-1)
			{
				if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i])
					ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}