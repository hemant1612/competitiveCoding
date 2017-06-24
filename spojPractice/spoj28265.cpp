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

lli a[100001]={0};
lli ans[100001]={0};
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
	lli n,m,w;
	cin>>n>>m>>w;
	while(n--)
	{
		int l,r;
		cin>>l>>r;
		a[l]++;
		a[r+1]--;
	}
	lli temp=0;
	REP(i,100001)
	{
		temp+=a[i];
		ans[i]=temp;
	}
	while(m--)
	{
		lli p;
		cin>>p;
		cout<<ans[p]<<endl;
	}
}