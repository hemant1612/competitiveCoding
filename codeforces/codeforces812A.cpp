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
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a[4][4];
	REP(i,4)
	{
		REP(j,4)
			cin>>a[i][j];
	}
	string ans="NO";
	if(a[3][3]==1)
	{
		if(a[0][0]==1||a[1][1]==1||a[2][2]==1||a[3][0]==1||a[3][1]==1||a[3][2]==1)
			ans="YES";
	}
	if(a[2][3]==1)
	{
		if(a[0][1]==1||a[1][2]==1||a[3][0]==1||a[2][0]==1||a[2][1]==1||a[2][2]==1)
			ans="YES";
	}
	if(a[1][3]==1)
	{
		if(a[0][2]==1||a[2][0]==1||a[3][1]==1||a[1][0]==1||a[1][1]==1||a[1][2]==1)
			ans="YES";
	}
	if(a[0][3]==1)
	{
		if(a[1][0]==1||a[2][1]==1||a[3][2]==1||a[0][0]==1||a[0][1]==1||a[0][2]==1)
			ans="YES";
	}
	cout<<ans<<endl;
}