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
	int n,k;
	cin>>n>>k;
	map<int,int> a,b;
	REP(i,n)
	{
		int x;
		cin>>x;
		a[x]=1;
	}
	REP(i,n)
	{
		int x;
		cin>>x;
		b[x]=1;
	}
	for(auto iter=a.rbegin();iter!=a.rend();iter++)
	{
		cout<<iter->first<<" "<<iter->second<<endl;
	}
}