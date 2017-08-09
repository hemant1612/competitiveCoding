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

int bSearch2(int low,int high,lli sum[],lli total,lli leftover)
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		if(sum[mid]-leftover<=total)
			low=mid;
		else high=mid-1;
	}
	//now low=high=x(see above for x)
	return low;
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,total;
		cin>>n>>total;
		lli a[n];
		REP(i,n) cin>>a[i];
		int i=0,j=0;
		int sum=0;
		int ans=0;
		int f=0;
		while(i<n)
		{
			if(f==1)
			{
				if(i==j)
				{
					ans=n;
					break;
				}
			}
			sum+=a[j];
			//cout<<"i "<<i<<" j "<<j<<" sum "<<sum<<endl;
			if(sum<=total)
			{
				if(f==0)
				{
					ans=max(ans,j-i+1);
				}
				else
				{
					ans=max(ans,n-i+j+1);
				}
				j++;
			}
			else
			{
				sum-=(a[i]+a[j]);
				i++;
			}
			if(j==n)
			{
				j=0;
				f=1;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}