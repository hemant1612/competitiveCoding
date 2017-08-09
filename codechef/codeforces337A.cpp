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
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
	}*/
	int n,m;
	cin>>n>>m;
	int a[n];
	REP(i,m) cin>>a[i];
	sorta(a,m);
	int min=INF;
	for(int i=0;i<=m-n;i++)
	{
		/*if(a[i+n-1]-a[i]<min)
			min=a[i+n-1]-a[i];*/
		cout<<"i "<<i<<endl;
		cout<<a[i+n-1]-a[i]<<" ";
	}
	cout<<endl;
	cout<<min<<endl;
	return 0;
}