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
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n,m;
	cin>>n>>m;
	int l[m];
	//cout<<"reached1"<<endl;
	REP(i,m) cin>>l[i];
	set<int> s;
	int f=1;
	mii mp;
	//cout<<"reached"<<endl;
	REP(i,m-1)
	{
		int x=(l[i+1]-l[i])%n;
		if(x==0) x=n;
		if(x<0) x=x+n;
		if(s.find(x)==s.end())
		{
			s.insert(x);
		}
		else
		{
			f=0;
			break;
		}
		mp[l[i]]=x;
	}
	
	if(f==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		if(n==3)
		{

		}
		else
		{
			if(s.size()==n)
			{
				FOR(i,1,n)
				{
					if(mp[i]!=0)
						cout<<mp[i]<<" ";
				}
				cout<<endl;
			}
			else cout<<"-1"<<endl;
		}
	}
	return 0;
}