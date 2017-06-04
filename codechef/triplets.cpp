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
typedef long long int lli;
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		vector<lli> v1;
		vector<pair<lli,lli>> v2;
		lli p,q,r;
		cin>>p>>q>>r;
		for(lli i=0;i<p;i++)
		{
			lli x;
			cin>>x;
			v1.pb(x);
		}
		sort(v1.begin(),v1.end());
		lli size1=v1.size();
		for(lli i=0;i<q;i++)
		{
			lli x;
			cin>>x;
			for(lli j=0;j<size1;j++)
			{
				if(v1[j]<=x)
				{
					v2.pb(mp(v1[j],x));
				}
				else break;
			}
		}
		sort(v2.begin(),v2.end());
		lli size2=v2.size();
		lli sum=0;
		for(lli i=0;i<r;i++)
		{
			lli x;
			cin>>x;
			for(lli j=0;j<size2;j++)
			{
				if(v2[j].se>=x)
					sum+=((v2[j].fi+v2[j].se)*(v2[j].se+x))%MOD;
			}
		}
		cout<<sum%MOD<<endl;
	}
