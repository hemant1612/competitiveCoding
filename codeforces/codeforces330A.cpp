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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int r,c;
	cin>>r>>c;
	char a[r][c];
	REP(i,r)
	{
		REP(j,c)
			cin>>a[i][j];
	}
	int ans=0;
	REP(i,r)
	{
		int counter=0;
		REP(j,c)
		{
			char c=a[i][j];
			if(c=='S')
			{
				for(int k=j-1;k>=0;k--)
				{
					a[i][k]='.';
				}
				counter=0;
				break;
			}
			if(c=='.')
			{
				a[i][j]='+';
				counter++;
			}
		}
		ans+=counter;
	}
	REP(i,c)
	{
		int counter=0;
		REP(j,r)
		{
			char c=a[j][i];
			if(c=='S')
			{
				counter=0;
				break;
			}
			if(c=='.')
			{
				counter++;
			}
		}
		ans+=counter;
	}
	cout<<ans<<endl;
}