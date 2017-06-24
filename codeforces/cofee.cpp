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
#define mii map<int,int>
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int mark[200001];
int store[200001];
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
	int n,k,q;
	cin>>n>>k>>q;
	REP(i,n)
	{
		int x,y;
		cin>>x>>y;
		mark[x]++;
		mark[y+1]--;
	}
	int temp=mark[0];
	if(mark[0]>=k)
		store[0]=1;
	FOR(i,1,200000)
	{
		temp+=mark[i];
		if(temp>=k)
			store[i]=store[i-1]+1;
		else store[i]=store[i-1];
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<store[r]-store[l-1]<<endl;
	}
}