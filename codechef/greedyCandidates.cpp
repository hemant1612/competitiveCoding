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
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		lli minSalary[n];
		REP(i,n) cin>>minSalary[i];
		lli offeredSalary[m];
		int maxJobOffers[m];
		int check[m];
		REP(i,m)
		{
			cin>>offeredSalary[i]>>maxJobOffers[i];
			check[i]=maxJobOffers[i];
		}
		int qual[n][m];
		REP(i,n)
		{
			REP(j,m)
			{
				char c;
				cin>>c;
				qual[i][j]=c-'0';
			}	
		}
		lli total=0,offers=0;
		REP(i,n)
		{
			//whatIs(i)
			lli salary=0;
			int job=-1;
			REP(j,m)
			{
				if(qual[i][j]==1)
				{
					
					if(offeredSalary[j]>=minSalary[i]&&maxJobOffers[j]>0)
					{
						if(offeredSalary[j]>=salary)
						{
							//reached
							job=j;
							salary=offeredSalary[j];
						}
					}
				}
			}
			//whatIs(job)
			if(job!=-1)
			{
				maxJobOffers[job]--;
				total+=salary;
				offers++;
				//whatIs(total)
				//whatIs(offers)
			}
		}
		lli leftovers=0;
		REP(i,m)
		{
			if(check[i]==maxJobOffers[i]) leftovers++;
		}
		cout<<offers<<" "<<total<<" "<<leftovers<<endl;
	}

	return 0;
}