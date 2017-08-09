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
#define sii set<int,int>

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
	int s[n],m[n];
	REP(i,n)
	{
		char c;
		cin>>c;
		s[i]=c-'0';
	}
	REP(i,n)
	{
		char c;
		cin>>c;
		m[i]=c-'0';
	}
	sorta(m,n);
	sorta(s,n);
	int ans_min=0,ans_max=0;
	for(int i=0,j=0;i<n&&j<n;i++,j++)
	{
		if(m[j]>=s[i]) continue;
		else
		{
			i--;
			ans_min++;
		}
	}
	cout<<ans_min<<endl;
	for(int i=0,j=0;i<n&&j<n;i++,j++)
	{
		if(m[j]>s[i]) ans_max++;
		else
		{
			i--;
		}
	}
	cout<<ans_max<<endl;
	return 0;
}