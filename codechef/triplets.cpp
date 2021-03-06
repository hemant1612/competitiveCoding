#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout<<setprecision(1)<<fixed;
#include <climits> //limits like Infinity
#include <cstring> //memset
#include <set>
#include <unordered_set>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
#define mii map<int,int>
ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use pow of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}
 
int bSearch(int low,int high,vector<pair<lli,lli>> v,lli sh)
{
	while(low<high)
	{
		int mid=low+(high-low+1)/2;
		if(v[mid].fi>sh)
			high=mid-1;
		if(v[mid].fi<=sh)
			low=mid;
	}
	return low;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int p,q,r;
		cin>>p>>q>>r;
		vector<pair<lli,lli>> vx;
		vector<pair<lli,lli>> vz;
		lli y[q];
		REP(i,p)
		{
			lli x;
			cin>>x;
			vx.pb(mp(x,0));
		}
		REP(i,q) cin>>y[i];
		REP(i,r)
		{
			lli z;
			cin>>z;
			vz.pb(mp(z,0));
		}
		sort(vx.begin(),vx.end());
		vx[0].se=vx[0].fi;
		FOR(i,1,p-1)
			vx[i].se=vx[i].fi+vx[i-1].se;
		sort(vz.begin(),vz.end());
		vz[0].se=vz[0].fi;
		FOR(i,1,r-1)
			vz[i].se=vz[i].fi+vz[i-1].se;
		sort(y,y+q);
		lli ans=0;
		REP(i,q)
		{
			int xpointer=bSearch(0,p-1,vx,y[i]);
			int zpointer=bSearch(0,r-1,vz,y[i]);
			lli xy=((zpointer+1)%MOD*y[i]%MOD*vx[xpointer].se%MOD)%MOD;
			lli yz=((xpointer+1)%MOD*y[i]%MOD*vz[zpointer].se%MOD)%MOD;
			lli xz=(vx[xpointer].se%MOD*vz[zpointer].se%MOD)%MOD;
			ans+=(xy+yz+xz+(y[i]%MOD*y[i]%MOD*((xpointer+1)%MOD*(zpointer+1)%MOD)%MOD)%MOD)%MOD;
		}
		cout<<ans%MOD<<endl;
	}
} 