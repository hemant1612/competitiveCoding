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
	int n,k;
	cin>>n>>k;
	int a[k];
	REP(i,k) cin>>a[i];
	int pairs=n*2;
	int quad=n;
	int f=1;
	REP(i,k)
	{
		if(a[i]>=4)
		{
			if(quad>0)
			{
				int sub=min(a[i]/4,quad);
				a[i]=a[i]-4*sub;
				quad-=sub;
			}
		}
		if(a[i]%2==0)
		{
			if(pairs>=a[i]/2)
				pairs-=a[i]/2;
			else if(quad>=a[i]/4)
			{
				{
					quad+=a[i]/4;
				}
			}
			else
			{
				f=0;
				break;
			}
		}
		else
		{
			if(pairs>=(a[i]/2+1))
				pairs-=(a[i]/2+1);
			else if(quad>=a[i]/4+1)
			{
				quad-=a[i]/4+1;
			}
			else
			{
				f=0;
				break;
			}
		}

	}
	if(f)
	{
		if(pairs<0||quad<0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}