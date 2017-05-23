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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	int current=0;
	int ans=0;
	REP(i,n)
	{
		int x,y;
		cin>>x>>y;
		current=current-x+y;
		if(current>ans)
			ans=current;
	}
	cout<<ans<<endl;
}