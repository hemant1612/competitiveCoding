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
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n,k,m;
	cin>>n>>k>>m;
	if(m==0)
	{
		if(k==pow(2,n)) cout<<"-1"<<endl;
		else
		{
			cout<<k<<" "<<pow(2,n)<<" ";
			if(k==1)
			{
				for(int i=2;i<pow(2,n);i++)
				{
					cout<<i<<" ";
				}
			}
			else
			{
				for(int i=1;i<pow(2,n);i++)
				{
					if(i!=k) cout<<i<<" ";
				}
			}
			cout<<endl;
		}
	}
	else
	{
		if(m>log2(k))
		{
			cout<<"-1"<<endl;
		}
		else if(m==n)
		{
			cout<<k<<" ";
			FOR(i,1,pow(2,n)-1)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			cout<<k<<" "<<1<<" ";
			int done=1;
			int p=2;
			while(done!=m)
			{
				if(p!=k)
				{
					cout<<p<<" ";
					p++;
					if(p!=k)
					{
						cout<<p<<" ";
						p++;
					}
					else
					{
						p++;
						cout<<p<<" ";
						p++;
					}
				}
				else
				{
					p++;
					cout<<p<<" ";
					p++;
					if(p!=k)
					{
						cout<<p<<" ";
						p++;
					}
					else
					{
						p++;
						cout<<p<<" ";
						p++;
					}
				}
				done++;
			}
			int last=pow(2,n);
			while(p<last)
			{
				if(p==k)
				{
					p++;
					cout<<p<<" "<<last<<" ";
					p++;
					last--;
				}
				else if(last==k)
				{
					last--;
					cout<<p<<" "<<last<<" ";
					p++;
					last--;
				}
				else
				{
					cout<<p<<" "<<last<<" ";
					p++;
					last--;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}