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
	int n;
	cin>>n;
	int k=2*n;
	vi v;
	int f=0;
	int curr=1;
	prq pq;
	int ans=0;
	while(k--)
	{
		string s;
		cin>>s;
		if(s[0]=='a')
		{
			int x;
			cin>>x;
			v.pb(x);
			f=1;
		}
		else
		{
			if(v.back()==curr)
			{
				v.pop_back();
			}
			else if(v.size()&&v.back()!=curr)
			{
				ans++;
				REP(i,v.size())
				{
					pq.push(v[i]);
				}
				v.clear();
			}
			else if(v.size()==0)
			{
				pq.pop();
			}
			curr++;
			f=0;
		}
	}
	cout<<ans<<endl;
}