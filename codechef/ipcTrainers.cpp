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
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		vector<pair<int,int>> mark[d+1];
		REP(i,n)
		{
			int day,tenure,sad;
			cin>>day>>tenure>>sad;
			mark[day].pb(mp(sad,tenure));
		}
		priority_queue<pair<int,int>> pq;
		FOR(i,1,d)
		{
			//cout<<"i "<<i<<endl;
			REP(j,mark[i].size())
			{
				//cout<<"pushed "<<mark[i][j].fi<<" "<<mark[i][j].se<<endl;
				pq.push(mp(mark[i][j].fi,mark[i][j].se));
			}
			if(pq.size()>0)
			{
				ii p1=pq.top();
				pq.pop();
				if(p1.se>1)
					pq.push(mp(p1.fi,p1.se-1));
			}
		}
		lli sum=0;
		while(pq.size()>0)
		{
			ii p1=pq.top();
			sum+=(lli)(((lli)p1.fi)*((lli)p1.se));
			pq.pop();
		}
		cout<<sum<<endl;
	}
	return 0;
}