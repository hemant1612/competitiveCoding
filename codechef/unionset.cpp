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
#include <unordered_set>
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
#define mii map<int,int>
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vi v[n];
		REP(i,n)
		{
			int len;
			cin>>len;
			REP(j,len)
			{
				int x;
				cin>>x;
				v[i].pb(x);
			}
		}
		REP(i,n)
			sort(v[i].begin(),v[i].end());
		lli ans=0;
		REP(i,n-1)
		{
			FOR(j,i+1,n-1)
			{
				lli p=0,q=0,counter=0;
				int sz1=v[i].size();
				int sz2=v[j].size();
				int z=1;
				for(z;z<=k;z++)
				{
					if(p<sz1&&q<sz2)
					{
						if(v[i][p]==z&&v[j][q]==z)
						{
							counter++;
							p++;
							q++;
						}
						else if(v[i][p]==z&&v[j][q]!=z)
						{
							p++;
							counter++;
						}
						else if(v[i][p]!=z&&v[j][q]==z)
						{
							q++;
							counter++;
						}
						else break;
					}
					else break;
				}
				if(p==sz1)
				{
					for(z;z<=k;z++)
					{
						if(q<sz2)
						{
							if(v[j][q]==z)
							{
								q++;
								counter++;
							}
							else break;
						}
						else break;
					}
				}
				else if(q==sz2)
				{
					for(z;z<=k;z++)
					{
						if(p<sz1)
						{
							if(v[i][p]==z)
							{
								p++;
								counter++;
							}
							else break;
						}
						else break;
					}
				}
				if(counter==k)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
}