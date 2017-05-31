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
	int n;
	cin>>n;
	int a[n];
	REP(i,n)
		cin>>a[i];
	int min =a[0];
	int max=a[0];
	int ans=0;
	FOR(i,1,n-1)
	{
		if(a[i]>max)
		{
			max=a[i];
			ans++;
		}
		if(a[i]<min)
		{
			min=a[i];
			ans++;
		}
	}
	cout<<ans<<endl;
}