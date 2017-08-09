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
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		lli a[n];
		lli sum=0;
		REP(i,n)
		{
			lli x;
			cin>>x;
			a[i]=x;
			sum+=x;
		}
		lli ans=0;
		int f=1;
		if(sum%n==0)
		{
			lli mean=sum/n;
			REP(i,n)
			{
				if(i+d<n)
				{
					lli diff=a[i]-mean;
					a[i]=mean;
					a[i+d]=diff+a[i+d];
					ans+=abs(diff);
				}
				else
				{
					if(a[i]!=mean)
					{
						f=0;
						break;
					}
				}
			}
		}
		else
		{
			f=0;
		}
		REP(i,n-1)
		{
			if(a[i]!=a[i+1])
			{
				f=0;
				break;
			}
		}
		//whatIs(f)
		if(f)
			cout<<ans<<endl;
		else
			cout<<"-1"<<endl;
	}

	return 0;
}