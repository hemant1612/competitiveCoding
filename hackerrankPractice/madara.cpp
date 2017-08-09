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
#define si set<int>

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int a[1000]={0};
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x;
		cin>>n>>k>>x;
		int max=-1,min=INF;
		REP(i,n)
		{
			int p;
			cin>>p;
			a[p]++;
			if(p>max) p=max;
			if(p<min) p=min;
		}
		int counter=0;
		while(k--)
		{
			REP(i,n+1)
			{
				if(counter%2==0)
				{
					if(a[i]>0)
					{
						int p=(i^x);
						if(p>max) p=max;
						if(p<min) p=min;
						a[i]--;
						a[p]++;
					}
				}
				counter++;
			}
		}
		cout<<max<<" "<<min<<endl;
	}

	return 0;
}