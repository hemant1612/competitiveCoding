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
#define nl "\n"

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
		string s;
		cin>>s;
		int ans=0;
		char c;
		if(s.at(0)=='U')
			c='U';
		else c='D';
		int change=0;
		FOR(i,1,s.length()-1)
		{
			if(change==0)
			{
				if(s.at(i)==c)
					continue;
				else
				{
					change=1;
					ans++;
				}
			}
			else
			{
				if(s.at(i)==c)
				{
					change=0;
				}
				else continue;
			}
		}
		cout<<ans<<endl;
	}
}