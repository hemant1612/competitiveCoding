#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][m];
	REP(i,n)
	{
		REP(j,m)
		{
			a[i][j]=1;
		}
	}
	int counter=n*m;
	FOR(i,1,k)
	{
		int r,c1,c2;
		cin>>r>>c1>>c2;
		c1--;c2--;r--;
		FOR(j,c1,c2)
		{
			if(a[r][j]==1)
			{
				a[r][j]=0;
				counter--;
			}
		}
	}
	cout<<counter<<endl;
}