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

int bSearch(int high,int low, vi v,int c,int n)
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		int current=v[0];
		int counter=1;
		int f=0;
		FOR(i,1,n-1)
		{
			if(v[i]-current>=mid)
			{
				current=v[i];
				counter++;
				if(counter==c)
				{
					f=1;
					break;
				}
			}
		}
		if(f)
		{
			low=mid;
		}
		else high=mid-1;
	}
	return low;
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		vi v;
		REP(i,n)
		{
			int x;
			cin>>x;
			v.pb(x);
		}
		sortv(v);
		int max=v[n-1]-1;
		int ans=bSearch(max,1,v,c,n);
		cout<<ans<<endl;
	}
}