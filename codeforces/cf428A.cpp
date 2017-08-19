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
	int a[n];
	REP(i,n) cin>>a[i];
	int arya=0,bran=0;
	int ans=0;
	int f=0;
//	whatIs(k)
	REP(i,n)
	{

		arya+=a[i];
		bran+=min(8,arya);
		arya-=min(8,arya);
		ans++;
		//whatIs(ans)
		//whatIs(arya)
		//whatIs(bran)
		if(bran>=k)
			break;
		
		f=1;
		
	}
	if(bran>=k) cout<<ans<<endl;
	else cout<<"-1"<<endl;
	return 0;
}