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
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<int> v[100];
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+2][m+2];
	FOR(i,0,m+1)
	{
		a[0][i]=0;
	}
	FOR(i,0,m+1)
	{
		a[n+1][i]=0;
	}
	FOR(i,1,n+1)
		a[i][0]=0;
	FOR(i,0,n+1)
	{
		a[i][m+1]=0;
	}	
	FOR(i,1,n)
	{
		FOR(j,1,m)
		{
			cin>>a[i][j];
		}
	}
	
	REP(i,n+2)
	{
		REP(j,n+2)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}