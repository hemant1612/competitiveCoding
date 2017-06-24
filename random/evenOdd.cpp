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

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vii v;
		REP(i,n)
		{
			int x;
			cin>>x;
			v.pb(mp(x,i));
		}
		sortv(v);
		int counter=0;
		FORD(i,n-1,1)
		{
			if(v[i].se%2==0)
			{
				if(v[i].fi%2==0)
				{
					continue;
				}
				else
				{
					cout<<v[i].fi<<" "<<v[i].se<<endl;
					v[i].fi--;
					v[i-1].fi++;
					counter++;
				}
			}
			else
			{
				if(v[i].fi%2==1)
				{
					continue;
				}
				else
				{
					cout<<v[i].fi<<" "<<v[i].se<<endl;
					v[i].fi--;
					v[i-1].fi++;
					counter++;
				}
			}
		}
		if(v[0].se%2==0)
		{
			if(v[0].fi%2==0)
				cout<<counter<<endl;
			else cout<<"-1"<<endl;
		}
		else
		{
			if(v[0].fi%2==1)
				cout<<counter<<endl;
			else cout<<"-1"<<endl;
		}
	}
}