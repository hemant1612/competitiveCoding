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
int a[4][52];
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(n==1)
			cout<<m<<endl;
		else
		{
			if(m==1)
			{
				if(n==2)
					cout<<"2"<<endl;
				else cout<<"3"<<endl;
			}
			else
			{
				if((m-1)%6==0)
				{
					int k=(m-1)/6;
					cout<<4*k+2<<endl;
				}
				else
				{
					double k=0.0;
					k=(double)m;
					int kk=(int)(ceil(k/6));
					cout<<4*kk<<endl;
				}
			}
		}
	}
}