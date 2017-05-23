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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool a[n+1];
		REP(i,n+1)
			a[i]=true;
		double ans=1;
		int copy=n;
		int i=2;
		while(i*i<=n)
		{
			if(n%i==0)
				ans*=1.0-1.0/i;
			while(n%i==0)
				n/=i;
			i++;
		}
		if(n>1)
			ans*=1.0-1.0/n;
		cout<<ans*copy<<endl;
	}
}