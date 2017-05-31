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
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
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
	int n,m;
	cin>>n>>m;
	int a[m];
	REP(i,m)
		cin>>a[i];
	lli ans=a[0]-1;
	FOR(i,1,m-1)
	{
		if(a[i]==a[i-1])
			continue;
		if(a[i]>a[i-1])
			ans+=a[i]-a[i-1];
		if(a[i]<a[i-1])
			ans+=n-a[i-1]+a[i];
	}
	cout<<ans<<endl;
}