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
int main()
{
	int n,m;
	cin>>n>>m;
	double ans=0.0;
	FOR(i,1,m)
	{
		int a,b,p;
		cin>>a>>b>>p;
		ans+=(b-a+1)*p;
	}
	ans/=n;
	cout<<(int)(floor(ans))<<endl;
}